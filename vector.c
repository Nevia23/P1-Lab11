#include "vector.h"
#include <stdlib.h>
#include <stdio.h>

void print_vector (Vector a) {
    
    int i;

    for (i = 0; i < a.size; i++) {
        printf ("%d ", a.data[i]);
    }

    printf ("\n");
}

void init (Vector* a) {

    a->size = 0;
    a->capacity = 1;
    a->data = malloc(sizeof(int));
}

int read (Vector a, unsigned int b) {
    return a.data[b];
}

void insert_element (Vector* a, int data, unsigned int pos) {
    if (a->size == a->capacity) {
        a->data = realloc (a->data, sizeof(int)*2*a->capacity);
        a->capacity = a->capacity * 2;
    }

    int i;

    for (i = a->size; i > pos; i--) {
        a->data[i] = a->data[i-1];
    }

    a->data[pos] = data;
    a->size++;
}

void delete_element (Vector* a, unsigned int pos) {
    int i;

    for (i = pos; i < a->size - 1; i++) {
        a->data[i] = a->data[i+1];
    }
    a->size--;
}