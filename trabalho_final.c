#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//DADO
typedef struct dataNode{
  char NomeMusico[30];
  char NomeInstrumeto[30];
  int ano;
  float price;
} DataNode;
//NÓ
typedef struct node{
    DataNode data;
    struct node* next;
} Node;
//LISTA
typedef struct list{
    int size;
    Node* head;
} List;
//DECLARACAO DE FUNCOES
List* createList();
void push(List* list, DataNode data);
void insert(List* list);
void printList(List* list);
bool isEmpty(List* list);
void pop(List* list);
Node* atPos(List* list, int index);
int indexOf(List* list,Node* node);
void erase (List* list, int index);
void del(List* list);
void instrumentosMusico(List* list);
void exibir(Node* aponta);
void media(List* list);
//FUNCOES
List* createList(){
    List* list =(List*) malloc(sizeof(List));
    
    list->size = 0;
    list->head = NULL;
    return list;
}

void push(List* list, DataNode data){
    Node* node = (Node*) malloc(sizeof(Node));
    
    node->data = data;
    node->next = list->head;
    list->head = node;
    list->size++;
}
void insert(List* list){
   
    DataNode data;
    printf("\nDigite o nome do musico: "); 
    scanf("%s",data.NomeMusico);
    printf("\nDigite o nome do instrumento: "); 
    scanf("%s",data.NomeInstrumeto);
    printf("\nDigite o ano de compra: ");
    scanf("%i",&data.ano);
    printf("\nDigite o preço de compra: ");
    scanf("%f",&data.price);
    printf("\n------------------------------\n");
     push(list, data);
}

void printList(List* list){
      if(isEmpty(list)){
           printf("Lista vazia\n");
           return;
           
      }
      
    Node* aponta = list->head;
  
    
    while(aponta !=NULL){
        printf("Nome do Musico: %s\n",aponta->data.NomeMusico);
        printf("Nome do Instrumento: %s\n",aponta->data.NomeInstrumeto);
        printf("Ano de Compra: %i\n",aponta->data.ano);
        printf("Preço do Instrumento: R$%.2f\n",aponta->data.price);
        printf("------------------------------\n");
        aponta = aponta->next;
        
    }
    printf("\n");
}

bool isEmpty(List* list){
    return(list->size==0);
   
}

void pop(List* list){
    if(!isEmpty(list)){
        Node* aponta = list->head;
        list->head = aponta->next;
        free(aponta);
        list->size--;
    }
}

Node* atPos(List* list, int index){
    if(index >= 0 && index < list->size){
        Node* aponta = list->head;
        int i = 0;
        for(i=0;i < index ; i++)
            aponta = aponta->next;
            return aponta;
    }
        printf("indice invalido!\n");
        return NULL;
}

int indexOf(List* list,Node* node){
    if(node != NULL){
        Node* aponta = list->head;
        int index = 0;
        
        while(aponta != node && aponta != NULL) {
            aponta = aponta->next;
            index++;
        }
        
        if(aponta != NULL)
        return index;
    }
    printf("Nó não pertence a lista");
    return -1;
}

void erase (List* list, int index){
    if(index == 0)
    pop(list);
    else{
        Node* current = atPos(list, index);
        if(current != NULL){
            Node* previous = atPos(list, index - 1);
            previous->next = current->next;
            
            free(current);
            list->size--;
        }
    }
}

void del(List* list){
      if(isEmpty(list)){
           printf("Lista vazia\n");
           return;
           
      }
    int opcao;  
    Node* aponta = list->head;
  
    printf("Numero do Instrumento a ser deletado:\n");
    while(aponta !=NULL){
        int n = indexOf(list,aponta);
        printf("%i - %s\n",n,aponta->data.NomeInstrumeto);
        aponta = aponta->next;
        
    }
    printf("\n");
    scanf("%i",&opcao);
    erase(list,opcao);
    printf("     DELETADO COM SUCESSO!     \n");
    printf("\n");
}

void instrumentosMusico(List* list){
     if(isEmpty(list)){
           printf("Lista vazia\n");
           return;
           
      }
    int opcao;  
    Node* aponta = list->head;
  
    printf("Digite o numero correspondente ao Nome do musico:\n");
    while(aponta !=NULL){
        int n = indexOf(list,aponta);
        printf("%i - %s\n",n,aponta->data.NomeMusico);
        aponta = aponta->next;
        
    }
    printf("\n");
    scanf("%i",&opcao);
    printf("      INSTRUMENTOS DO MUSICO:     \n\n");
    Node* musico = atPos(list,opcao);
    exibir(musico);
    printf("\n");
}
void exibir(Node* aponta){
        
        printf("Nome do Musico: %s\n",aponta->data.NomeMusico);
        printf("Nome do Instrumento: %s\n",aponta->data.NomeInstrumeto);
        printf("Ano de Compra: %i\n",aponta->data.ano);
        printf("Preço do Instrumento: R$%.2f\n",aponta->data.price);
        printf("------------------------------\n");
}

void media(List* list){
    if(isEmpty(list)){
           printf("Lista vazia\n");
           return;
           
      }
      
    Node* aponta = list->head;
    int ano = 0;
    int dividir = 0;
    int media = 0;
    while(aponta !=NULL){
        ano += aponta->data.ano;
        dividir++;
        aponta = aponta->next;
        
    }
    media = ano / dividir;
    printf("Instrumentos possuen %i ANOS de idade média.",media);
    printf("\n");
}

int main()
{   
    List* list = createList(); 
    int opcao = 0;
    int escolha = 0;
    do {
        printf("DIGITE UM NUMERO: \n");
        printf("1 - CADASTRAR INSTRUMENTOS:\n");
        printf("2 - DELETAR INSTRUMENTOS:\n");
        printf("3 - IMPRIMIR INSTRUMENTOS:\n");
        printf("4 - BUSCAR POR MUSICO:\n");
        printf("5 - IDADE MÉDIA DOS INSTRUMENTO:\n");
        printf("6 - SAIR DO PRROGRAMA:\n");
        scanf("%i",&opcao);
        
        switch(opcao){
            case 1:
                insert(list);
                break;
            case 2:
                del(list);
                break;
            case 3:
                printList(list);
                break;
            case 4:
                instrumentosMusico(list);
                break;
            case 5:
                media(list);
                break;
            case 6:
                escolha=1;
                printf("SEÇÃO FINALIZADA!");
                break;
            default:
                printf("NUMERO DIGITADO INCORRETO.");
        }
        
        
  
} while(escolha != 1);
}
