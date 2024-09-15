#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float sal;
    char ava;

    printf("Informe qual foi sua avaliação (A/B/C): ");
    scanf(" %c", &ava);
    
    printf("Agora informe o seu salário: ");
    scanf("%f", &sal);

    switch (ava)
    {
    case 'A':
	case 'a':
    	
    	sal = sal*1.15;
    	
    	printf("Salário com aumento de 15%: %.2f", sal);
    	
        break;
        
    case 'B':
	case 'b':
    	
    	sal = sal*1.10;
    	
    	printf("Salário com aumento de 10%: %.2f", sal);
    	
    	break;
    	
    case 'C':
	case 'c':
    	
    	sal = sal*1.05;
    	
    	printf("Salário com aumento de 5%: %.2f", sal);
    	
    	break;
    
    default:
    	
    	printf("Seu salário não teve um bônus devido sua avaliação.");
    	
        break;
    }
    
    return 0;
}
