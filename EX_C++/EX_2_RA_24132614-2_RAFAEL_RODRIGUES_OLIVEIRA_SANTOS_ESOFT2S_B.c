#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int val, n100, n50, n20, n10, n5, resto;

    printf("Informe o valor do saque: ");
    scanf("%d", &val);

    n100 = val/100;
    resto = val%100;

    n50 = resto/50;
    resto = resto%50;

    n20 = resto/20;
    resto = resto%20;

    n10 = resto/10;
    resto = resto%10;

    n5 = resto/5;

    printf("Notas de R$100: %d\n", n100);
    printf("Notas de R$50: %d\n", n50); 
    printf("Notas de R$20: %d\n", n20); 
    printf("Notas de R$10: %d\n", n10); 
    printf("Notas de R$5: %d\n", n5);

    return 0;
}