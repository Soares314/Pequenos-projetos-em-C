#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(int argc, char *argv[ ])
{
    srand(time(NULL));
    int L, bct;
    char fds;
    while(1){
    printf("Gire uma moedas\n");
    scanf("%c", &fds);
    bct = rand();
    L = bct%2;
    if(L == 0){
        printf("Coroa\n");
    }
    if(L == 1){
        printf("Cara\n");
    }
 }
    return 0;
}
