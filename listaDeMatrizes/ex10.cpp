#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat1[4][3], i, j, soma;
	
	for(i=0; i < 3; i++){
	    for(j=0; j < 3; j++){
	    	printf("\nInforme o valor da posição [%d][%d] : ", i, j);
	    	scanf("%d", &mat1[i][j]);
		}	
	}
	
	for(i=0; i < 3; i++){
		soma = 0;
	    for(j=0; j < 3; j++){
	    	soma += mat1[i][j];
		}
		printf("\nA soma dos valores da linha %d é: %d", i, soma);	
	}
    
	return 0;   
}

