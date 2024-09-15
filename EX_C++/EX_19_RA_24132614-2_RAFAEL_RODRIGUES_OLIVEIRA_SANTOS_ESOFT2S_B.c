#include <stdio.h>
#include <locale.h>
#include <math.h>



int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int grau, umidade;
    
    float sensacao;
    
    printf("Informe a temperatura: ");
    scanf("%d", &grau);
    
    printf("Informe a umidade do ar (em %%): ");
    scanf("%d", &umidade);
    
    sensacao = 13.12 + 0.6215 * grau - 11.37 * pow(umidade, 0.16) + 0.3965 * grau * pow(umidade, 0.16);
    
    printf("A sensação térmica é de: %.2f°C\n", sensacao);
    
    return 0;
}
