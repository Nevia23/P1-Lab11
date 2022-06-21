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
    
}

int pop(Pila* ptr) {

}