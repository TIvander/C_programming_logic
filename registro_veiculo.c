
#include <stdio.h>

typedef struct cadastroVeiculo{
 char nome[30] ;
 char cor[20] ;
 char placa[10];
 char turno[1];
}registrar;

registrar carros[100];
int main()
{
     void informacoes_veiculo();
     void cadastrar_veiculo();
  
     
     cadastrar_veiculo();
     informacoes_veiculo();
     
    
    


  
}
void cadastrar_veiculo(){
    
      for(int i=0;i<100;i++){
        printf("Digite o nome do proprietario: ");
        gets(&carros[i].nome);
        printf("Digite a cor do carro: ");
        gets(&carros[i].cor);
        printf("Digite a placa do carro: ");
        gets(&carros[i].placa);
        printf("Digite o turno: ");
        gets(&carros[i].turno);
      }
     
    }
    
void informacoes_veiculo(){

   for(int i=0;i<100;i++){
       printf("\n");
       printf("Nome do proprietario: %s\n",carros[i].nome);
       printf("Cor do carro: %s\n",carros[i].cor);
       printf("Placa: %s\n",carros[i].placa);
       printf("Turno: %s\n",carros[i].turno);
    } 
    


}









    