#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(0, "Portuguese");

    float nt1, nt2, media, extra;
    printf("Informe a primeira nota:\n");
    scanf("%f", &nt1);
    printf("Informe a segunda nota:\n");
    scanf("%f", &nt2);
    media=(nt1+nt2)/2;

    if(media>=7){
        printf("Aprovado.\n");
    }else{
        printf("Informe a nota da prova extra:\n");
        scanf("%f", &extra);
        extra=(extra+media)/2;

        if(media>=5){
        printf("Aprovado com recuperação.\n");
        }else{
        printf("Reprovado.\n");
    }
    }

system("pause");
return 0;
}
