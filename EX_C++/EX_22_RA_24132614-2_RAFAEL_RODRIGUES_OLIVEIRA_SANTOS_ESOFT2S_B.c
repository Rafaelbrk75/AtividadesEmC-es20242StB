#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float temp, conver;
    char tipo;
    
    printf("Conversor de temperaura:\n");
    
    printf("Informe o tipo desejado\n\nA-(Celsius para Fahrenheit) \n\nB-(Fahrenheit para Celsius)\n");
    scanf(" %c", &tipo);
    
    switch(tipo){
    	
    	case 'A':
    	case 'a':
    		
    		printf("Informe a temperatura: ");
            scanf("%f", &temp);
            
            conver = (temp * 9 / 5) + 32;
            
            printf("Temperatura em Fahrenheit: %.2f\n", conver);
            
            break;
        
        case 'B':
        case 'b':
        	
     		printf("Informe a temperatura: ");
            scanf("%f", &temp);
            
            conver = (temp - 32) * 5 / 9;
            
            printf("Temperatura em Celsius: %.2f\n", conver);
            
            break; 
			
		default:
		
		    printf("Opção inválida! Opções disponíveis (A e B)\n ") ;
			break;     	
            
	}
	
    return 0;
}
