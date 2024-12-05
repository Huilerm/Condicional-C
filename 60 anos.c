#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int idade, ingre, des;
    printf("Informe a sua idade:\n");
    scanf("%d", &idade);
    printf("Informe o valor do ingresso:\n");
    scanf("%d", &ingre);
    if(idade>60){
        des=ingre*0.3;
        ingre=ingre-des;
        printf("Valor total a pagar:\n%d.\n", ingre);
    }else{
        des=ingre*0.1;
        ingre=ingre-des;
        printf("Valor total a pagar:\n%d.\n", ingre);
    }

system("pause");
return 0;
}
