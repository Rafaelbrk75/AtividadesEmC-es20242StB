#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float sal;
    char ava;

    printf("Informe qual foi sua avalia��o (A/B/C): ");
    scanf(" %c", &ava);
    
    printf("Agora informe o seu sal�rio: ");
    scanf("%f", &sal);

    switch (ava)
    {
    case 'A':
	case 'a':
    	
    	sal = sal*1.15;
    	
    	printf("Sal�rio com aumento de 15%: %.2f", sal);
    	
        break;
        
    case 'B':
	case 'b':
    	
    	sal = sal*1.10;
    	
    	printf("Sal�rio com aumento de 10%: %.2f", sal);
    	
    	break;
    	
    case 'C':
	case 'c':
    	
    	sal = sal*1.05;
    	
    	printf("Sal�rio com aumento de 5%: %.2f", sal);
    	
    	break;
    
    default:
    	
    	printf("Seu sal�rio n�o teve um b�nus devido sua avalia��o.");
    	
        break;
    }
    
    return 0;
}
