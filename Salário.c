#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float sal, emp, lim;
    printf("Informe o seu salário:\n");
    scanf("%f", &sal);
    printf("Informe o valor da prestação do empréstimo:\n");
    scanf("%f", &emp);
    lim=sal*0.20;
    if(emp>lim){
        printf("Empréstimo não concedido.\n");
    }else{
        printf("Empréstimo concedido.\n");
    }

system("pause");
return 0;
}
