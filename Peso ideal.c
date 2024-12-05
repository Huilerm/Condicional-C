#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float altura, cal;
    char genero;

    printf("Informe a sua altura:\n");
    scanf("%f", &altura);

    printf("Informe o seu gênero (enviei H para homem e M para mulher):\n");
    scanf(" %c", &genero);

    if(genero == 'H'){
        cal=(72.7*altura)-58;
        printf("Se você é homem, o seu peso ideal é:\n%.2f\n", cal);
            }else if(genero == 'M'){
            cal=(62.1*altura)-44.7;
            printf("Se você é mulher, o seu peso ideal é:\n%.2f\n", cal);
                }else{
                printf("Gênero inválido!");
                                            }



system("pause");
return 0;
}
