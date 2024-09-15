#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int n, n1;
    const int MAX_TENTATIVAS = 10;
    
    // Gera um número aleatório entre 1 e 100
    srand(time(NULL));
    n = rand() % 100 + 1;
    
    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número entre 1 e 100. Você tem %d tentativas.\n", MAX_TENTATIVAS);
    
    // Primeira tentativa
    printf("Tentativa 1: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na primeira tentativa! Parabéns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    // Segunda tentativa
    printf("Tentativa 2: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na segunda tentativa! Parabéns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    // Terceira tentativa
    printf("Tentativa 3: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na terceira tentativa! Parabéns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    // Quarta tentativa
    printf("Tentativa 4: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na quarta tentativa! Parabéns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    // Quinta tentativa
    printf("Tentativa 5: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na quinta tentativa! Parabéns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    // Sexta tentativa
    printf("Tentativa 6: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na sexta tentativa! Parabéns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    // Sétima tentativa
    printf("Tentativa 7: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na sétima tentativa! Parabéns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    // Oitava tentativa
    printf("Tentativa 8: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na oitava tentativa! Parabéns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    // Nona tentativa
    printf("Tentativa 9: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na nona tentativa! Parabéns!!!\n");
        return 0;
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    // Décima tentativa
    printf("Tentativa 10: ");
    scanf("%d", &n1);
    if (n1 == n) {
        printf("Você acertou o número na décima tentativa! Parabéns!!!\n");
    } else if (n1 < n) {
        printf("O número é maior.\n");
    } else {
        printf("O número é menor.\n");
    }
    
    printf("Você esgotou todas as tentativas. O número era %d.\n", n);
    
    return 0;
}
