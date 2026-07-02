/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//conflito da silva na branch nova
int main()
{
    int a;
    printf("Escreva um número inteiro:");
    scanf("%i", &a);
    if (a%2 == 0)
    {
        printf("O número %i é par.",a);
    } 
    
    else{
        printf("O número %i é impar.",a);
    }
    return 0;
}
