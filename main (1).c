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
