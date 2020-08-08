
#include <stdio.h>
#include <stdlib.h>


//Dado
typedef struct dateNode{
  int id;
    
} DataNode;


//nó
typedef struct node{
    DataNode data;
    struct node* next;
    
} Node;


//Lista
typedef struct list{
    int size;
    Node* head;
    
} List;

//criar lista

List* createList(){
    List* list = (List*) malloc(sizeof(List));
    
    list->size = 0;
    list->head = NULL;
    
    return list;
}

List* createList();

void push(List* list,DataNode data);
    




void push(List* list,DataNode data){
    Node* node = (Node*) malloc(sizeof(Node));
    
    node->data = data;
    node->next = list->head;
    list->head = node;
    list->size++;
}



int main()
{
    List* lista = createList();
    DataNode data;
    data.id = 5;
    
    
    //push(lista,data);
    //printf("%d",lista->head->data.id);
    printf("%d",lista->size);
    
}
