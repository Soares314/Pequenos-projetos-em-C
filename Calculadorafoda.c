#include <stdio.h>

int potencia(int base, int expoente);
int letraparanumero();

int main(){
    int base1, base2, c, i = 0, resultado1 = 0;
    char numero1[1000], numero2[1000];
    printf("numero 1: ");
    scanf("%s", &numero1);
    printf("base 1: ");
    scanf("%d", &base1);
    printf("numero 2: \n");
    printf("base 2: \n");
    printf("operacao: \n");
    printf("base resultado: \n");
    while(numero1[i] != '\0')
        i++;
    i--;
    for(c = 0; c <= i; c++){
        numero1[c] = numero1[c] - 48;
        resultado1 = numero1[c]*potencia(base1, i-c) + resultado1;
    }
    printf("%d", resultado1);
    return 0;
}
int potencia(int base, int expoente){
    int i, total = 1;
    for(i = 0; i < expoente; i++){
        total = total * base;
    }
    return total;
}
