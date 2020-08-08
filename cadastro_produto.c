#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastrar_produtos_estoque{
    char nome[20];
    int quantidade;
    float valor;
}cadastro;

 cadastro prod[2];
 
int main() {
    void maior();
    void menor();
    void cadastra();
    void informacoes();
    int opcao,i;
    printf("CADASTRO DE PRODUTOS: \n");
    
    cadastra();
    printf("\nDigite a opção desejada \n");
    printf("\n1 - Cadastrar novos produtos: \n");
    printf("\n2 - Imprimir informações dos produtos: \n");
    scanf("%i",&opcao);
    switch (opcao){
        case 1:
            printf("\nCadastro de produto: \n");
            cadastra();
            break;
        case 2:
            printf("\nInformações do produto: \n");
            informacoes();
            break;
        default:
             printf("opção inválida,digite 1 ou 2:\n");
        
    }
    maior();
    menor();
    
    
    
}
 void cadastra(){
        for(int i=0;i<2;i++){
        printf("\nDigite o nome do produto %i: ",i+1);
        scanf("%s",&prod[i].nome);
        printf("\n--------------\n");
        printf("Digite a quantidade: ");
        scanf("%d",&prod[i].quantidade);
        printf("\n--------------\n");
        printf("Digite o preço do produto: ");
        scanf("%f",&prod[i].valor);
        printf("\n--------------\n");
        }
    }
    
  void informacoes(){
       for(int i=0;i<2;i++){
        printf("Nome: %s \n",prod[i].nome);
        
        printf("Quantidade: %d \n",prod[i].quantidade);
       
        printf("Preço: %.2f",prod[i].valor);
        printf("\n--------------\n");
        
        }
  }  
 void maior(){
     float maior=prod[0].quantidade * prod[0].valor;
      int position = 0;
      for(int i=0;i<2;i++){
          float temp =prod[i].quantidade * prod[i].valor;
          
          if(temp > maior){
              maior=temp;
              position = i;
          }
          
      }
      printf("Produto de maior valor é '%s' seu valor é %.2f",prod[position].nome,maior);
      printf("\n");
 }
 
 void menor(){
     float menor=prod[0].quantidade * prod[0].valor;
      int position = 0;
      for(int i=0;i<2;i++){
          float temp =prod[i].quantidade * prod[i].valor;
          
          if(temp < menor){
              menor=temp;
              position = i;
          }
          
      }
      printf("Produto de menor valor é '%s' seu valor é %.2f",prod[position].nome,menor);
       printf("\n");
 }

    
    
    
    
    
    
    
    
    
    
    