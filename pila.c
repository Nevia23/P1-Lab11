#include "pila.h"
#include <stdlib.h>
#include <stdio.h>

void print_pila(Pila ptr) {
    int i;
    for (i = 0; i < ptr.size; i++) {
        printf ("%d ", ptr.data[i]);
    }
    printf("\n");
}

void init(Pila* ptr) {
    ptr->capacity = 1;
    ptr->size = 0;
    ptr->data = malloc(sizeof(int));
}

void push(Pila* ptr, int elem) {
    
    if (ptr->capacity == ptr->size) {
        ptr->data = realloc(ptr->data, sizeof(int)*2*ptr->capacity);
        ptr->capacity = ptr->capacity * 2;
    }
    ptr->data[ptr->size] = elem;
    ptr->size++;
}

int pop(Pila* ptr) {
    if (ptr->size > 0) {
        ptr->size--;
        return ptr->data[ptr->size];
    }
}