#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float val, desc;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe o valor da sua compra para um possivel desconto: ");
    scanf("%f", &val);

    if(val > 100 && val<= 500){

        desc = val-(val*0.10);

        printf("O valor da compra com desconto de 10 porcento ficou: %f", desc);

    }else if(val > 500){

        desc = val-(val*0.20);

        printf("O valor da compra com desconto de 20 porcento ficou: %f", desc);

    }else printf("Sua compra não teve alteração de valor");

    return 0;
}