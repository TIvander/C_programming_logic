
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

List* createList();


List* createList(){
    List* list = (List*) malloc(sizeof(List));
    
    list->size = 0;
    list->head = NULL;
    
    return list;
}




int main()
{
    List* lista = createList();
    printf("%d",lista->size);
    
}
