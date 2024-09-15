#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int val, raiz;

    printf("Informe um número para saber se ele é um quadrado perfeito: ");
    scanf(" %d", &val);
    
    raiz = sqrt(val);
    
    if(raiz*raiz == val){
    	
    	printf("\n%d é um quadrado perfeito!", val);
    	
	}else printf("\n%d não é um quandrado perfeito!", val);
	
    return 0;
}
