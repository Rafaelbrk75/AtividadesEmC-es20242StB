#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float consumo, preco, cal;
	int dist;
	
	printf("Cálculo para o custo de uma viagem:\n\n");
	
	printf("Informe o consumo médio de combustível de seu veículo (KM/L): ");
	scanf("%f", &consumo);
	
	fflush(stdin);
	
	printf("\nQual será a distancia a ser percorrida (em KM): ");
	scanf("%d", &dist);
	
	fflush(stdin);
	
	printf("\nInforme o preço do litro do combustivel (R$): ");
	scanf("%f", &preco);
	
	cal = dist/consumo;
	
	cal = cal*preco;
	
	printf("\nO custo estimado da viagem será de: R$%.2f", cal);
	
	return 0 ;
}
