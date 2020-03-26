#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct{
    int topo;
    int itens[MAX];
}pilha;

void CriaPilhaVazia(pilha *p){
    p->topo=0;
}

int empilha (pilha *p, int item){
    if (p->topo>=MAX){
        printf("pilha cheia");
        return 0;  //Falso
    }
    else{
        p->itens[p->topo]=item;
        p->topo++;
        return 1; //Verdadeiro
    }
}

int desempilha (pilha *p){
    if (p->topo==0){
        printf ("pilha vazia");
        return 0; //Falso
    }
    else{
        p->topo--;
        return p->itens[p->topo];
    }
}

int vazia (pilha *p){
    if (p->topo==0)
        return 1;
    else
        return 0;
}

int cheia (pilha *p){
    if (p->topo==MAX)
        return 1;
    else
        return 0;
}

int main()
{
    printf("\n");
    return 0;
}
