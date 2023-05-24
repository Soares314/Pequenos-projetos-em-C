#include <stdio.h>
#define N 5

float ap,
      at[4],
      q[4],
      t;
char sn;
int main(){
    while(1){
    int co;
    printf("Insira o valor do aporte: ");
    scanf("%f", &ap);

    for(co = 0; co<N; co++){
        printf("Ativo?: ");
        scanf(" %f", &at[co]);
        printf("Quantidade?: ");
        scanf("%f", &q[co]);
        t = t + at[co] * q[co];
        }
    printf("Total: %f\n", t);
    if(t>ap){
        printf("BIP\n");
    }
    printf("Continue? ");
    scanf(" %c", &sn);
    if(sn == 110){
        break;
    }
    }
    return 0;
}
