#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float nt1, nt2, nt3, cal;

    printf("Informe a primeira nota:\n");
    scanf("%f", &nt1);
    printf("Informe a segunda nota:\n");
    scanf("%f", &nt2);
    printf("Informe a terceira nota:\n");
    scanf("%f", &nt3);
    cal=(nt1*1)+(nt2*1)+(nt3*2);
    cal=cal/4;
    cal=cal*10;

    if(cal>=60){
        printf("Você foi aprovado.\n");
    }else{
        printf("Você foi reprovado.\n");
    }

system("pause");
return 0;
}
