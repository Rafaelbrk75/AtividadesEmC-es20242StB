#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float consumo, preco, cal;
	int dist;
	
	printf("C�lculo para o custo de uma viagem:\n\n");
	
	printf("Informe o consumo m�dio de combust�vel de seu ve�culo (KM/L): ");
	scanf("%f", &consumo);
	
	fflush(stdin);
	
	printf("\nQual ser� a distancia a ser percorrida (em KM): ");
	scanf("%d", &dist);
	
	fflush(stdin);
	
	printf("\nInforme o pre�o do litro do combustivel (R$): ");
	scanf("%f", &preco);
	
	cal = dist/consumo;
	
	cal = cal*preco;
	
	printf("\nO custo estimado da viagem ser� de: R$%.2f", cal);
	
	return 0 ;
}
