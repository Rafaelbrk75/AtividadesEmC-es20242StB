#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int n, n1;
    const int MAX_TENTATIVAS = 10;
    
    // Gera um n�mero aleat�rio entre 1 e 100
    srand(time(NULL));
    n = rand() % 100 + 1;
    
    printf("Bem-vindo ao jogo de adivinha��o!\n");
    printf("Tente adivinhar o n�mero entre 1 e 100. Voc� tem %d tentativas.\n", MAX_TENTATIVAS);
    
    // Primeira tentativa
    printf("Tentativa 1: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na primeira tentativa! Parab�ns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    // Segunda tentativa
    printf("Tentativa 2: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na segunda tentativa! Parab�ns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    // Terceira tentativa
    printf("Tentativa 3: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na terceira tentativa! Parab�ns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    // Quarta tentativa
    printf("Tentativa 4: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na quarta tentativa! Parab�ns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    // Quinta tentativa
    printf("Tentativa 5: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na quinta tentativa! Parab�ns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    // Sexta tentativa
    printf("Tentativa 6: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na sexta tentativa! Parab�ns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    // S�tima tentativa
    printf("Tentativa 7: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na s�tima tentativa! Parab�ns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    // Oitava tentativa
    printf("Tentativa 8: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na oitava tentativa! Parab�ns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    // Nona tentativa
    printf("Tentativa 9: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na nona tentativa! Parab�ns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    // D�cima tentativa
    printf("Tentativa 10: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Voc� acertou o n�mero na d�cima tentativa! Parab�ns!!!\n");
    } else if (n1 < n) {
        printf("O n�mero � maior.\n");
    } else {
        printf("O n�mero � menor.\n");
    }
    
    printf("Voc� esgotou todas as tentativas. O n�mero era %d.\n", n);
    
    return 0;
}
