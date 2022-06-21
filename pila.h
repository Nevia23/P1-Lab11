typedef struct
{
    unsigned int size;
    unsigned int capacity;
    int *data;
} Pila;

void print_pila(Pila ptr);
void init(Pila* ptr); //Inizializza pila con capacity 1 e senza nessun elemento
void push(Pila* ptr, int elem); //push dell'elemento elem sulla pila
int pop(Pila* ptr);