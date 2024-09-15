#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    
    float aluguel, km, total;
    const float taxa = 13.83;
    
    printf("Informe o valor do aluguel do carro (R$): ");
    scanf("%f", &aluguel);
    
    printf("\nInforme a quilometragem rodada (KM): ");
    scanf("%f", &km);
    
    total = (km*taxa) + aluguel;
    
    printf("\nO valor total do aluguel foi de R$%.2f", total);
    printf("\nObs: valor da taxa por quilometragem R$%.2f", taxa);
    
    return 0;
}
