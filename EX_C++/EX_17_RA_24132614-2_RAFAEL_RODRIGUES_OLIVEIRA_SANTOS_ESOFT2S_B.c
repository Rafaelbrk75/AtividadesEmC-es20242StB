#include <stdio.h>
#include <locale.h>
#include <math.h>



int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int cod, quant;
    
    printf("Digite o código para validação: ");
    scanf("%d", &cod);
    
    quant = (int)log10(abs(cod)) + 1;
    
    if(quant < 5){
    	
    	printf("O código informado está com o formato inválido!\n");
    	
    	
    	printf("Digiteo novamente: ");
    	scanf(" %d", &cod);
    	
    	quant = (int)log10(abs(cod)) + 1;
	
	    if(quant < 5){
		
		    printf("\nO segundo código também é inválido\n\n");
		    printf("Finalizando o programa ...");
		
	    }else {
		
		    printf("\nCódigo válido.\n");
		    
	    }
	      
    }else{
    	
    	printf("\nCódigo válido.\n");
	}
	      
    return 0;
}
