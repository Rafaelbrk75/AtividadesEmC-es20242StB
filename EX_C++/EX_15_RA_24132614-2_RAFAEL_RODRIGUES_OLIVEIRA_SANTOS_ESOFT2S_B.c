#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int senha;
    
    printf("Regra: sua senha deve ser n�merica.\n");
    printf("Digite uma senha que voc� gostaria de usar:");
    scanf("%d", &senha);


    return 0;
}

