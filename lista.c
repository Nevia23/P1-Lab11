#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

void print_list(Lista* l) {
    if (l == NULL) {
        printf ("vuota\n");
    }
    else {
        while (l != NULL) {
            printf ("%d ", l->info);
            l = l->next;
        }
        printf ("\n");
    }
}

Lista* init(int data, Lista* next) {
    Lista *newNode = malloc(sizeof(Lista));
    newNode->info = data;
    newNode->next = next;
    return newNode;
}

int read(Lista* l, unsigned int pos) {
    while (l != NULL && pos > 0) {
        l = l->next;
        pos--;
    }
    
    if (l != NULL) {
        return l->info;
    } else {
        return -1;
    }
}

void insert_element(Lista** l, int data, unsigned int pos) {
    if(pos == 0){
        *l = init(data, *l);
        return;
    }

    if (*l == NULL) {
        return;
    }

    Lista *last = *l;

    while (last->next != NULL && pos > 1) {
        last = last->next;
        pos--;
    }

    if (pos == 1) {
        last->next = init (data, last->next);
    }
}

void delete_element(Lista** l, unsigned int pos){

    if (*l == NULL) {
        return;
    }
    if (pos == 0) {
        Lista *new_l = (*l)->next;
        free(*l);
        *l = new_l;
        return;
    }
    Lista *last = *l;

    while (last->next != NULL && pos > 1) {
        last = last->next;
        pos--;
    }

    if (pos = 1 && last->next != NULL) {
        Lista *new_l = last->next->next;
        free (last->next);
        last->next = new_l;
    }
}

unsigned int size (Lista *l) {
    unsigned int i = 0;
    while (l != NULL) {
        i++;
        l = l->next;
    }
    return i;
}