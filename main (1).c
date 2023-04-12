/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 0;
    char t = 0;
    printf("Tem carro? ");
    scanf("%c", &t);    
    printf("Idade? ");
    scanf("%d", &i);
    if((int)t == 115){
        printf("Recebe 200 reais");
            }
    if((int)t == 110){

     if(18<i & 50>i){
        printf("Recebe 500 reais");
            }else{
                printf("Recebe 200 reais");
            }
    }
        return 0;
}
