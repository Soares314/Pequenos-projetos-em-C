#include <stdio.h>
int potencia(int base, int expoente);
void letraparanumero(char* letra);
void numeroparaletra(char* numero);
void trocadeposicoes(int* vetor);

int main(){
    int base1, base2, c, i = 0, resultado1 = 0, resultado2 = 0, resultadofinal = 0, baseresultado, resultado[1000];
    char numero1[1000], numero2[1000], operacao;
    printf("Numero 1: ");
    scanf("%s", &numero1);
    printf("Base 1: ");
    scanf("%d", &base1);
    printf("Numero 2: ");
    scanf("%s", &numero2);
    printf("Base 2: ");
    scanf("%d", &base2);
    fflush(stdin);
    printf("Operacao: ");
    scanf("%c", &operacao);
    fflush(stdin);
    printf("Base resultado: ");
    scanf("%d", &baseresultado);
    while(numero1[i] != '\0')
        i++;
    i--;
    for(c = 0; c <= i; c++){
        numero1[c] = numero1[c] - 48;
        letraparanumero(&numero1[c]);
        resultado1 = numero1[c]*potencia(base1, i-c) + resultado1;
    }
    i = 0;
    c = 0;
    while(numero2[i] != '\0')
        i++;
    i--;
    for(c = 0; c <= i; c++){
        numero2[c] = numero2[c] - 48;
        letraparanumero(&numero2[c]);
        resultado2 = numero2[c]*potencia(base2, i-c) + resultado2;
    }
    if(operacao == '+')
        resultadofinal = resultado1 + resultado2;
    if(operacao == '-')
        resultadofinal = resultado1 - resultado2;
    if(operacao == '*')
        resultadofinal = resultado1 * resultado2;
    if(operacao == '/')
        resultadofinal = resultado1 / resultado2;
    for(i = 0; resultadofinal > 0; i++){
        resultado[i] = resultadofinal%baseresultado;
        resultadofinal = resultadofinal/baseresultado;
    }
    i--;
    while(i >= 0){
        if(resultado[i]<10){
            printf("%d", resultado[i]);
            }else{
            printf("%c", resultado[i] + 55);
            }
    i--;
    }
    return 0;
}
int potencia(int base, int expoente){
    int i, total = 1;
    for(i = 0; i < expoente; i++){
        total = total * base;
    }
    return total;
}
void letraparanumero(char* letra){
    if(*letra>16 && *letra<23){
            *letra = *letra - 7;
    }
    if(*letra>48 && *letra<55){
            *letra = *letra - 39;
    }
}
