#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

        float peso, altura, imc;
    printf("Informe o seu peso:\n");
    scanf("%f", &peso);
    printf("Informe a sua altura:\n");
    scanf("%f", &altura);
    imc=peso/(altura*altura);
    if(imc>18.5 && imc<24.9){
       printf("Peso normal.\n");
    }else{
        printf("Peso fora do normal.\n");
    }

system("pause");
return 0;
}
