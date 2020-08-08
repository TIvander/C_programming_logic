#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 int **p;
  int **q;
int main(){
    void matriz(int n);
    void matriz2(int n);
    void calcular(int n);
    int n;
    printf("digite a dimensão das matriz a serem multiplicadas ; \n");       //solicita a dimensão da matriz
    printf("Ex: 2-matriz[2x2] , 3-matriz[3x3]...\n");
    scanf("%d",&n);                                                         //captura a dimensão da matriz
    
   matriz(n);   //chamando as funções e passando o parametro n para definir a dimensão das matrizes
   matriz2(n);  // por padrão as dimensõees das matrizes são iguais pois só é possível realizar a multiplicação
   calcular(n); //  se o numero de linhas da matriz 1 for o mesmo do numero de colunas da matriz 2
    
   
    
    
   
  
}

void matriz(int n){
              //declara a matriz
    int i,j;       // variaveis contadoras 
    
    
    
    p=(int **)malloc(n * sizeof(int *));      //aloca as linhas da matriz 
    printf("digite os valores da primeira matriz ; \n");//solicita os valores dos vetores
   for(i=0;i<n;i++){
       p[i]=(int *)malloc(n * sizeof(int));  //para cada iteração realiza a alocação de colunas
        for(j=0;j<n;j++){
            scanf("%d",&p[i][j]);   //captura os valores a serem armazenados
        }
   }
   system("clear");
   printf("MATRIZ 1   \n");
   for(i=0;i<n;i++){
   printf("--");
   }
   printf("\n");
   for(i=0;i<n;i++){  
       
       for(j=0;j<n;j++){
       printf("%d ",p[i][j]);  // imprime os valores da matriz
        }
        printf("\n");
   }
   for(i=0;i<n;i++){
   printf("--");
   }
}

void matriz2(int n){
    int i,j;
   
    q=(int **)malloc(n * sizeof(int*));    //alocando linhas
    printf("\nDigite os valores da segunda matriz : \n");
    for(i=0;i<n;i++){
        q[i]=(int *)malloc(n * sizeof(int)); //alocando colunas
        
        for(j=0;j<n;j++){
            
            scanf("%d",&q[i][j]);
        }
    }
    system("clear");
    printf("MATRIZ 2  \n");
     for(i=0;i<n;i++){
   printf("--");
   }
   printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",q[i][j]);            //imprimindo valores da matriz 2
        }
        printf("\n");
    }
     for(i=0;i<n;i++){
   printf("--");
   }
     
}

void calcular(int n){                            // funcão calcular
    int i,j,k,valor;
    int **e;
   
    e=(int **)malloc(n * sizeof(int *));        // alocando linha
    for(i=0;i<n;i++){
        e[i]=(int *)malloc(n * sizeof(int));    //alocando coluna
        for(j=0;j<n;j++){
            valor=0;
           for(k=0;k<n;k++){
            valor+=(p[i][k] * q[k][j]);
           
            }
             e[i][j]=valor;
            
        }
    }
    printf("\n Resultado da multiplicação : \n");
    for(i=0;i<n;i++){
        printf("----");
    }
    printf("\n");         
    for(i=0;i<n;i++){
        
        for(j=0;j<n;j++){
            
            printf("%d ",e[i][j]);        //imprimindo o resultado
            
        }
        printf("\n");
        
    }
      for(i=0;i<n;i++){
        printf("----");
    }
    for(i=0;i<n;i++){ //Liberando o espaço alocado
        free(q[i]);
    }
     free(q);
     
     for(i=0;i<n;i++){ //Liberando o espaço alocado
        free(p[i]);
    }
     free(p);
     
     for(i=0;i<n;i++){ //Liberando o espaço alocado
         free(e[i]);
     }
     free (e);
    
}
