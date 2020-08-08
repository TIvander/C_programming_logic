
#include <stdio.h>
#include <stdlib.h>


typedef struct dataNode
{
    char nome[20];
    int idade;
}DataNode;


typedef struct node
{
    DataNode data;
    struct node * next;
}Node;

typedef struct list
{
    int size;
    Node* head;
}List ;

List* createList();
void push(List* list, DataNode data);
void printList(List* list);
void transferir(List* list,List* l1);
List* createList(){
    List* list = (List *) malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;
    return list;
}

void push(List* list, DataNode data){
    Node* node = (Node *) malloc(sizeof(Node));
    
    node->data = data;
    node->next = list->head;
    list->head = node;
    list->size++;
}

void printList(List* list){
   Node* pointer = list->head;
   while(pointer != NULL){
       printf("NOME: %s\n",list->head->data.nome);
       printf("IDADE: %d\n",list->head->data.idade);
       pointer = pointer->next;
   }
}

void transferir(List* list,List* l1){
    list=l1;
    printList(list);
}

int main()
{
   List* l1 = createList();
   List* l2 = createList();
   DataNode n;
   scanf("%s",n.nome);
   scanf("%d",&n.idade);
   push(l1,n);
  printf("Lista 1\n");
   printList(l1);
   
  printf("Lista com dados transferidos da lista 1\n");
  transferir(l2,l1);
    
}
