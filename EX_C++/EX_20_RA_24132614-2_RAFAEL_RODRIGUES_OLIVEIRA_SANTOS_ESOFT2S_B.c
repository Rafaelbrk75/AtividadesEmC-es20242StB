#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int ano;
    
    printf("Apresente um ano para saber se ele e bissexto ou n�o: ");
    scanf("%d", &ano);
    
    if(ano%4 == 0 && ano%100 != 0 || ano%400 == 0){
    	
    	printf("\n%d � um ano bissexto!", ano);
    	
	}else printf("\n%d n�o � um ano bissexto!", ano);
	
    return 0;
}
