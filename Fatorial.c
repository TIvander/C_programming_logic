/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
  float serie(int n);              //declaração da função serie
  int n;
  printf("Digite o valor : ");
  scanf("%d",&n);                  //obter valor de n que sera passado por parametro
  float res=serie(n);
  printf("\nResultado da soma da serie de 1 sobre fatorial até n é %.4f",res);  //imprimindo o resultado
  
 
 
 
}

float serie(int n){
 int fatorial(int n);                           //declaração da função fatorial
 float res,total;                              // variaveis a serem usadas na função
 
 
 if(n==0){                       
    return 0;
 }else{
 res= fatorial(n);                          //chamando a função fatorial(n)
 //printf("\n");
total= (1/res) + serie(n-1) ;               //recursão da função serie
printf("S=1/%d! = %f + ",n,total);       //printando os valores obtidos
  
return total;
}
    
}

int fatorial(int n){
   int res;
   //printf("%d * ",n);
   if(n==0){
       return 1;
   }else{
       
       res=n*fatorial(n -1);             //recursão da função fatorial
       //printf(" = %d",res);
       return res;
       
   }
    
}





