#include <stdio.h>
#include <stdlib.h>
//estrutura
struct fila 
{
   int posicao;
   struct fila* prox;
};

struct fila* primeiro = NULL;
struct fila* ultimo= NULL;
//declaracao
void printFila();
void inserir(int);
void remover();

//funcoes
void printFila()
{
    struct fila* temp;
    temp = primeiro;
    printf("\n");
    while(temp != NULL)
    {
        printf("%d\t",temp->posicao);
        temp = temp->prox;
    }
}

void inserir(int numero)
{
    struct fila* node = (struct fila*)malloc(sizeof(struct fila));
    node->posicao = numero;
    node->prox = NULL;
    if (ultimo == NULL)
    {
        primeiro = node;
        ultimo = node;
    }else{
        ultimo->prox = node;
        ultimo = ultimo->prox;
    }
}

void remover()
{
    if(primeiro == NULL)
    printf("\n\nA lista está vaia \n");
    else {
        struct fila* temp;
        temp = primeiro;
        primeiro = primeiro->prox;
        printf("\n\n%d deletado",temp->posicao);
        free(temp);
        
    }
}

int main()
{
    int numero, opcao;
    do 
    {
        printf("\n\nMENU DA FILA\n1. Adicionar \n2. Remover \n3. Exibir Fila \n0. Sair");
        printf("Digite a opçao 0-3? :\n ");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
                printf("\nDigite o numero :");
                scanf("%d",&numero);
                inserir(numero);
                break;
            case 2:
                remover();
                break;
            case 3:
                printFila();
                break;
        }
        
    }while (opcao != 0);
   
}
