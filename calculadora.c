/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float calc(float a,float b,char operat){ //declaração da função
    float result;
    
    switch(operat){ //logica que utiliei para capturar o tipo da conta "+ - * ou /"
        case '-' :
            result = a-b;
            break;
            
        case '+' :
            result = a+b;
            break;
            
        case '*':
            result = a*b;
            break;
            
        case '/':
            result = a/b;
            break;
        
        default:
            printf("Digite um operador  válido :' + - * / ' "); //valor deafault ,mensagem de erro caso o usuario digite valores incorretos
    }
    return result;//retorna o resultdo baseado no operador que o usuarrio digitou
}
int main(){
    float a,b;
    char operat;
    
    printf("Digite a operação que deseja fazer : \n");
    scanf("%f %c %f",&a,&operat,&b);//captura os valores e o operador que serão utilizados denttro da função "calc"
    
    
    calc(a,b,operat);
    printf("%.2f %c %.2f = %.2f ",a,operat,b,calc(a,b,operat)); //consulta a função para receber o resultado
    
}

