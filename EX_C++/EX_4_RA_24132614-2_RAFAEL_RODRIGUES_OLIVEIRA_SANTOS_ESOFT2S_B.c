#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int val, raiz;

    printf("Informe um n�mero para saber se ele � um quadrado perfeito: ");
    scanf(" %d", &val);
    
    raiz = sqrt(val);
    
    if(raiz*raiz == val){
    	
    	printf("\n%d � um quadrado perfeito!", val);
    	
	}else printf("\n%d n�o � um quandrado perfeito!", val);
	
    return 0;
}
