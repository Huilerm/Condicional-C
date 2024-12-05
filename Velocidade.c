#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float vel;
    printf("Informe a velocidade:\n");
    scanf("%f", &vel);
    if(vel<80){
        printf("Dentro do limite de velocidade.\n");
    }else{
        printf("Acima do limite.\n");
        vel=vel-80;
        vel=vel*5;
        printf("O valor da multa é:\n%.2f.\n", vel);
    }

system("pause");
return 0;
}
