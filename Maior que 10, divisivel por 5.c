#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int numero;
    printf("Informe o número:\n");
    scanf("%d", &numero);
    if(numero>10 && numero%5==0){
       printf("Maior que 10 e divisível por 5.\n");
    }else{
        printf("Não atende às condições.\n");
    }

system("pause");
return 0;
}

