#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int n1, n2, soma;
    printf("Informe o primeiro número:\n");
    scanf("%d", &n1);
    printf("Informe o segundo número:\n");
    scanf("%d", &n2);
    soma=n1+n2;
    if(soma>20){
        soma=soma+8;
        printf("O resultado da soma é:\n%d\n", soma);
    }else{
        soma=soma-5;
        printf("O resultado da soma é:\n%d\n", soma);
    }

system("pause");
return 0;
}
