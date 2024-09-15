#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int val;
    float desc;
    char cat;
    
    printf("Informe o categoria do livro (A/B/C): ");
    scanf("%c", &cat);
    
    fflush(stdin);
    
    printf("\nQual o valor total da compra? ");
    scanf("%d", &val);
    
    switch(cat){
    	case 'A':
    	case 'a':
    	   
    	   desc = val-(val*0.25);
    	   printf("\nSua compra recebeu um desconto de 25 porcento totalizando: %.2f", desc);
    	   
    	   break;
    	
    	case 'B':
    	case 'b':
		 
		   desc = val-(val*0.20);
		   printf("\nSua compra recebeu um desconto de 20 porcento totalizando: %.2f", desc);
		   
		   break; 
    	
	   case 'C':
	   case 'c':
			
			desc = val-(val*0.10);
			printf("\nSua compra recebeu um desconto de 10 porcento totalizando: %.2f", desc);
       
            break;
        }
    return 0;
}
