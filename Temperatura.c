#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float celcius;
    printf("Informe a temperatura:\n");
    scanf("%f", &celcius);
    if(celcius<20){
        celcius=(celcius*9)+32;
        printf("A temperatura em Fahrenheit é:\n%f.\n", celcius);
    }else{
        celcius=celcius+273.15;
        printf("A temperatura em Kelvin é:\n%f.\n", celcius);
    }

system("pause");
return 0;
}

