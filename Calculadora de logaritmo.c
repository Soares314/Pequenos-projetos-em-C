#include <stdio.h>
#include <locale.h>
void log(int L, int b)
{
    int c;
    int lo;
    int t = 1;
    while(t != L){
        t = b*t;
        lo++;
    }
    printf("%d", lo);
}


int main()
{
    int i, e;
    printf("Logaritmo de ");
    scanf("%d", &i);
    printf("de base ");
    scanf("%d", &e);
    log(i, e);
    return 0;
}
