#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    int numero;
    printf("Informe o n�mero:\n");
    scanf("%d", &numero);
    if(numero%2==0){
        printf("O n�mero � par.");
    }else{
        printf("O n�mero � impar.\n");
        numero=numero*3;
        printf("O triplo �: %d\n.", numero);
    }

system("pause");
return 0;
}
