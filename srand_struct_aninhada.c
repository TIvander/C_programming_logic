
#include <stdio.h>
typedef struct data{
    int ano;
    int dia;
    int mes;
    
}calendario;

typedef struct cartao_credito{
    int numero;
    int cod;
    calendario data;
    char nome [30];
}cartao;



int main()
{   
    cartao credito;
    
    
    srand((unsigned)time(NULL));
    printf("          GERADOR DE CARTÃO:\n");
    credito.numero = 1000000 + (rand() % 9999999); // Veja [1]
     credito.cod = 1 + (rand() % 999);
     fflush(stdin);
      printf("digite a data:\n");
      printf("dia: ");
      fflush(stdin);
      scanf("%i",&credito.data.dia);
      printf("mes: ");
      fflush(stdin);
      scanf("%i",&credito.data.mes);
      printf("ano: ");
     fflush(stdin);
      scanf("%i",&credito.data.ano);
      
      fflush(stdin);
      printf("\ndigite seu nome: ");
      fflush(stdin);
      scanf("%s",credito.nome);
       
      printf("_____________________\n");
      printf("|NOME:     %s \n",credito.nome);
       printf("_____________________\n");
      printf("|Numero:     %i \n",credito.numero);
       printf("_____________________\n");
      printf("|VISA         Cod-%i \n",credito.cod);
       printf("_____________________\n");
      printf("|Validade %i/%i/%i ",credito.data.dia, credito.data.mes, credito.data.ano);
     
      printf("\n_____________________");
      
      
       
        
   // x = 1 + ( rand() % 10 )

 
 
 
 
 
 
 
 
 
 
 
   
}