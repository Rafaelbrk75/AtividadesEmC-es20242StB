#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int val;
	char nom[50];
	
	printf("Qual � o seu nome: \n");
	scanf("%s", &nom);
	
	fflush(stdin);
	
	printf("\n%s informe sua quantidade de pontos: ", nom);
	scanf(" %d", &val);
	
	if(val >= 1 && val <= 10){
		
		printf("\n%s voc� ganhou uma caneta!\n", nom);
		
	}else if(val > 10 && val <= 20){
		
		printf("\n%s voc� ganhou uma camisa!\n", nom);
	
	}else if(val > 20 && val <=30){
		
		printf("\n%s voc� ganhou um kit cinema!\n", nom);
		
	}else printf("\nValor informado � invalido!\n");	
	
	return 0;	
}
