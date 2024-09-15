#include <stdio.h>
#include <locale.h>
#include <math.h>



int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float investimento, montante, taxa;
    
    int periodo, numP;
    
    char tipo;
    
    printf("Informe o valor inicial do investimento: ");
    scanf("%f", &investimento);
    
    printf("Agora informe a taxa de juros: ");
    scanf("%f", &taxa);
    
    taxa = taxa/100;
    
    printf("Período do investimento (A-mes | B-ano): ");
    scanf(" %c", &tipo);
    
    printf("Agora informe o tempo de investimento: ");
    scanf("%d", &periodo);
    
    switch(tipo){
    	case 'a':
    	case 'A':
    		
    		montante = investimento * pow(1 + (taxa/12), periodo);
    		
    		printf("O montante acumulado foi de R$%.2f", montante);
    		
    		break;
    		
    	case 'b':
    	case 'B':
    		
    		printf("Informe o número de períodos por ano: ");
    		scanf("%d", &numP);
    		
    		montante = investimento * pow(1+(taxa/ numP), numP*periodo);
    		
    		printf("O montente acumulado é: R$%.2f", montante);
    		
    		break;
    		
    	default:
    		
    		printf("Tipo de período inválido.\n");
    		break;
    		
	}
	      
    return 0;
}
