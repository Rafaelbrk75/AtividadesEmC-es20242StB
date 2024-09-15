#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float emprestimo, taxa, pmt;
    int numP;
	
	printf("Informe o valor do emprestimo (R$): ");
	scanf("%f", &emprestimo);
	
	
	printf("\nDígite a taxa de juros: ");
	scanf("%f", &taxa);
	
	
	printf("\nQuantas parcelas possui o emprestimo: ");
	scanf("%d", &numP);
	
	taxa = taxa/100;
	
	pmt = (emprestimo*taxa) / (1 - pow(1 + taxa, - numP));
	
	printf("\nO valor da parcela mensal é: R$%.2f", pmt);
	
    return 0;
}
