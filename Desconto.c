#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float compra;
    int tipo;
    printf("Informe o valor da compra:\n");
    scanf("%f", &compra);
    printf("Informe a forma de pagamento:\n1-A vista\n2-A prazo\n");
    scanf("%d", &tipo);
    if(compra>500 && tipo==1){
       printf("Tem direito a desconto.\n");
    }else{
        printf("Sem desconto.\n");
    }

system("pause");
return 0;
}
