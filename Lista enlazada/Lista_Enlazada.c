#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Libro{
    char *titulo;
    int anioDePublicacion;
    struct libroNodo *next;
}libroNodo;

libroNodo *datoInicial = NULL;
libroNodo *datoFinal = NULL;

/*void crearNodo(nodo *Nodo){
    
}*/
void buscarElemento(libroNodo *Nodo){
    Nodo -> next = NULL;
    if(datoInicial == NULL){
        datoInicial = Nodo;
        datoFinal = Nodo;
        printf("Lista vacia");
    }else{
        datoFinal -> next = Nodo;
        datoFinal = Nodo;
        printf("Lista llena");
    }
}

int main(int argc, char argv[]){
    struct Libro *lista;
    libroNodo *datoInicial = malloc(sizeof(libroNodo));
    datoInicial -> titulo = "Hachk";

    libroNodo *datoFinal = malloc(sizeof(libroNodo));
    datoFinal -> anioDePublicacion = 1997;

    buscarElemento(datoInicial);
    buscarElemento(datoFinal);

    libroNodo *i = datoInicial;
        while(i != NULL){
            printf("%s",i -> titulo);
            printf("%d",i -> anioDePublicacion);
            i = i -> next;
            //i = i -> next;
        }
    return 0;
}