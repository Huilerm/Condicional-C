#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int numero;
    printf("Informe o número:\n");
    scanf("%d", &numero);
    if(numero%2==0){
        printf("O número é par.");
    }else{
        printf("O número é impar.\n");
        numero=numero*3;
        printf("O triplo é: %d\n.", numero);
    }

system("pause");
return 0;
}
