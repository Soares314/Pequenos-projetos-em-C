#include <stdio.h>
#include <locale.h>
int n1,
    n2,
    n3,
    n4,
    n5,
    fi;
int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Responda 1 para sim e 0 para n�o\n");
    printf("Telefonou para a v�tima? ");
    scanf("%d", &n1);
    printf("Esteve no local do crime? ");
    scanf("%d", &n2);
    printf("Mora perto da v�tima? ");
    scanf("%d", &n3);
    printf("Devia para a v�tima? ");
    scanf("%d", &n4);
    printf("J� trabalhou com a v�tima? ");
    scanf("%d", &n5);
    fi = n1+n2+n3+n4+n5;
    if(fi==2){
            printf("Suspeita");
        }
    if(fi==5){
            printf("Assassino");
        }
    if(fi==3 || fi==4){
            printf("C�mplice");
        }
    if(fi==1 || fi==0){
            printf("Inocente");
        }
    return 0;
    };
