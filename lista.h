typedef struct nodo{
    int info;
    struct nodo *next;
} Lista;

void print_list(Lista* l);
//stampa il contenuto della lista

Lista* init(int data, Lista* next);
//crea una lista con un nuovo nodo iniziale con campo info uguale a
//data e collegata in testa ad una lista next
//(next può essere anche NULL)

int read(Lista* l, unsigned int pos);

void insert_element(Lista** l, int data, unsigned int pos);

void delete_element(Lista** l, unsigned int pos);

unsigned int size(Lista* l);