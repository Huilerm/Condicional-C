#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float sal, emp, lim;
    printf("Informe o seu sal�rio:\n");
    scanf("%f", &sal);
    printf("Informe o valor da presta��o do empr�stimo:\n");
    scanf("%f", &emp);
    lim=sal*0.20;
    if(emp>lim){
        printf("Empr�stimo n�o concedido.\n");
    }else{
        printf("Empr�stimo concedido.\n");
    }

system("pause");
return 0;
}
