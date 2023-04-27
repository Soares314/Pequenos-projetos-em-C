#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    long long int s = 0;
    int m = 0;
    int h = 0;
    int d = 0;
    int w = 0;
    int t = 0;
    int a = 0;
    int e = 0;
    int c = 0;
    int q = 0;
    printf("Segundos?: ");
    scanf("%d", &s);
    if(s <= 0){
       printf("Ausencia Temporal \n");
       getchar();
;
       }
            if(s < 60){
            printf("%d Segundos \n", s);
            getchar();

            }
            m = s/60;
            s = s - 60*m;
            if(m < 60){
            printf("%d Minutos %d Segundos \n", m, s);
            getchar();

            }
            h = m/60;
            m = m - 60*h;
            if(h < 24){
            printf("%d Horas %d Minutos %d Segundos \n", h, m, s);
            getchar();

            }
            d = h/24;
            h = h - 24*d;
            if(d < 7){
            printf("%d Dias %d Horas %d Minutos %d Segundos \n", d, h, m, s );
            getchar();

            }
            w = d/7;
            d = d - 7*w;
            if(w < 4){
            printf("%d Semanas %d Dias %d Horas %d Minutos %d Segundos \n", w, d, h, m, s);
            getchar();
            }
            t = w/4;
            w = w - 4*t;
            if(t < 12){
            printf("%d Meses %d Semanas %d Dias %d Horas %d Minutos %d Segundos \n", t, w, d, h, m, s);
            getchar();
            }
            a = t/12;
            t = t - 12*a;
            if(a <= 10){
            printf("%d Anos %d Meses %d Semanas %d Dias %d Horas %d Minutos %d Segundos \n", a, t, w, d, h, m, s);
            getchar();

            }
            e = a/10.000000;
            a = a - 10.000000*e;
            if(e <= 10.000000){
            printf("%d Decadas %d Anos %d Meses %d Semanas %d Dias %d Horas %d Minutos %d Segundos \n", e, a, t, w, d, h, m, s);
            getchar();

            }
            c = e/10.000000;
            e = e - 10.000000*c;
            if(c <= 10.000000){
            printf("%d Seculos %d Decadas %d Anos %d Meses %d Semanas %d Dias %d Horas %d Minutos %d Segundos \n", c, e, a, t, w, d, h, m, s);
            getchar();

            }
            q = c/10.000000;
            c = c - 10.000000*q;
            printf("%d Milenios %d Seculos %d Decadas %d Anos %d Meses %d Semanas %d Dias %d Horas %d Minutos %d Segundos \n", q, c,e, a, t, w, d, h, m, s);
    return 0;
    };
