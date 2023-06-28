
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[3], v[3], i, c;
    int* px[3];
    int maior;
    for(i=0; i<3; i++){
        printf("Digite um numero: ");
        scanf("%d", v[i]);
    }
    for(c=0; c<3; c++){
        for(i=0; i<3; i++){
            if(v[c]>v[i+1]){

            }
        }
        px[i] = &x[i];
    }
    return 0;
}
