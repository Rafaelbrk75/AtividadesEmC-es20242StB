#include <stdio.h>
#include <locale.h>
#include <math.h>



int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int cod, quant;
    
    printf("Digite o c�digo para valida��o: ");
    scanf("%d", &cod);
    
    quant = (int)log10(abs(cod)) + 1;
    
    if(quant < 5){
    	
    	printf("O c�digo informado est� com o formato inv�lido!\n");
    	
    	
    	printf("Digiteo novamente: ");
    	scanf(" %d", &cod);
    	
    	quant = (int)log10(abs(cod)) + 1;
	
	    if(quant < 5){
		
		    printf("\nO segundo c�digo tamb�m � inv�lido\n\n");
		    printf("Finalizando o programa ...");
		
	    }else {
		
		    printf("\nC�digo v�lido.\n");
		    
	    }
	      
    }else{
    	
    	printf("\nC�digo v�lido.\n");
	}
	      
    return 0;
}
