#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

setlocale(0, "Portuguese");

    float num;
    printf("Informe o número:\n");
    scanf("%f", &num);

    if (num >= 0) {
        printf("A raiz quadrada de %.2f é %.2f.\n", num, sqrt(num));
    } else {
        printf("%.2f ao quadrado é %.2f.\n", num, pow(num, 2));
    }

system("pause");
return 0;
}
