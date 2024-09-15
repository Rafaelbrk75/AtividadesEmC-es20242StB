#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int ano;
    
    printf("Apresente um ano para saber se ele e bissexto ou não: ");
    scanf("%d", &ano);
    
    if(ano%4 == 0 && ano%100 != 0 || ano%400 == 0){
    	
    	printf("\n%d é um ano bissexto!", ano);
    	
	}else printf("\n%d não é um ano bissexto!", ano);
	
    return 0;
}
