#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int saq, n100, n50, n20, n10, n5, resto, escolha,cont;
	int val = 3450;
	int continuar = 1;
	
	while(continuar){
	
	
	printf("Caixa eletronico opções:\n 1-Saldo\n 2-Sacar\n 3-Sair\n\n");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			
			printf("O seu saldo é: R$%d\n", val);
			
			break;
			
		case 2:
			
			printf("\nInforme o valor do saque: ");
			scanf("%d", &saq);
			
			if(saq > val){
				
				printf("Valor informado indisponível!\n Encerrando o programa...\n");
				
			}else {
				
				n100 = saq/100;
				resto = saq%100;
				
				n50 = resto/50;
				resto = resto%50;
				
				n20 = resto/20;
				resto = resto%20;
				
				n10 = resto/10;
				resto = resto%10;
				
				n5 = resto/5;
				
				printf("Notas de R$100: %d\n Notas de R$50: %d\n Notas de R$20: %d\n Notas de R$10: %d\n Notas de R$5: %d\n", n100,n50,n20,n10,n5);
				
				val -= saq;
				
				printf("\n Novo saldo de R$%d\n\n", val);
			}
			
			break;
			
		case 3:
			
			printf("\nFim do programa...\n");
			continuar = 0;
			break;
			
		default: 
		
		    printf("Opção inválida!");
	}
}
	
	return 0;
}
