
#include <stdio.h>
#include <stdlib.h>

typedef struct dataNode
{
    int numero;
} DataNode;



typedef struct node
{
    DataNode data;
    struct node* next;
} Node;



typedef struct list
{
    int size;
    Node* head;
    
} List;

List* createList();

void push(List* list, DataNode data);

void printList(List* list);

List* createList()
{
    List* list =(List *)malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;
    return list;

}

void push(List* list, DataNode dados){
    Node* node =(Node*) malloc(sizeof(Node));

    node->data = dados;
    node->next = list->head;
    list->head = node;

    list->size++;

}

void printList(List* list){
    Node* pointer = list->head;
    
    list->head->data.numero % 2 ==0?printf("---LISTA PAR---\n"):printf("---LISTA IMPAR---\n");
        
    while(pointer != NULL){
        printf("%d",pointer->data.numero);
        pointer = pointer->next;
        printf("\n");
    }
    
}

int main()
{
 List* par = createList();
 List* impar = createList();
 int n,d;
 DataNode dados;
 printf("Quantos numeros deseja guardar? : ");
 scanf("%d",&n);
 for(int i = 0; i< n; i++){
 printf("Digite os numeros: ");
 scanf("%d",&d);
    if(d % 2 == 0){
        dados.numero = d;
        push(par, dados);
    } else {
         dados.numero = d;
         push(impar,dados);
    }
 }
 
printList(par);
printList(impar);
 
}
 




