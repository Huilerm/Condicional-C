#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float A, B, maior, menor;
    printf("Digite o valor de A:\n");
    scanf("%f", &A);
    printf("Digite o valor de B:\n");
    scanf("%f", &B);

    if(A==B){
        printf("Todos os valores são iguais.\n");
            }else{
                if(A>B){
                maior=A;
                    }else{
                    maior=B;
                            }

    if(A<B){
        menor=A;
            }else{
            menor=B;
                    }

        printf("Maior valor: %.2f\n", maior);
        printf("Menor valor: %.2f\n", menor);
    }

system("pause");
return 0;
}
