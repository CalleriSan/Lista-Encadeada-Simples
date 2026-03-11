#include <stdio.h>
#include <stdlib.h>

struct no{
    int valor;
    struct no *prox;
};
typedef struct no No;

typedef struct {
    No *inicio;
}Lista;

void imprimirLista(Lista *L){
    No *aux;
    aux = L->inicio;
    if(aux == NULL) {
        printf("LISTA VAZIA");
    }else{
        while(aux != NULL) {
            printf(" %i ", aux->valor);
            aux = aux->prox;
        }
    }
}

int main(){
    No *no1, *no2;
    Lista L;

    no1 = (No*)malloc(sizeof(No));
    no2 = (No*)malloc(sizeof(No));

    no1->valor = 10;
    no2->valor = 20;
    no1->prox = no2;
    no2->prox = NULL;
    L.inicio = no1;
    imprimirLista(&L);
    return 0;
}
