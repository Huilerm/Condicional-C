#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float A, B, C, D, maior, menor;
    printf("Digite o valor de A:\n");
    scanf("%f", &A);
    printf("Digite o valor de B:\n");
    scanf("%f", &B);
    printf("Digite o valor de C:\n");
    scanf("%f", &C);
    printf("Digite o valor de D:\n");
    scanf("%f", &D);

    if(A==B && B==C && C==D){
        printf("Todos os valores são iguais.\n");
        }else{
            if(A>B && A>C && A>D){
                maior=A;
                }else if (B>A && B>C && B>D){
                maior=B;
                    }else if (C>A && C>B && C>D){
                    maior=C;
                        }else{
                        maior=D;
                                    }

    if(A<B && A<C && A<D){
        menor=A;
            }else if(B<A && B<C && B<D) {
            menor=B;
                    }else if(C<A && C<B && C<D) {
                    menor=C;
                        }else{
                            menor=D;
                                        }

        printf("Maior valor: %.2f\n", maior);
        printf("Menor valor: %.2f\n", menor);
    }

system("pause");
return 0;
}
