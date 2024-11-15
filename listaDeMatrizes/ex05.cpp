#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat1[10][10];
	int mat2[10][10];
	int multiM[10][10], i,j;
	
	for(i=0; i < 10; i++){
	    for(j=0; j < 10; j++){
	    	printf("\nInforme o valor da posição [%d][%d] da matriz 1: ", i, j);
	    	scanf("%d", &mat1[i][j]);
	    	printf("\nInforme o valor da posição [%d][%d] da matriz 2: ", i, j);
	    	scanf("%d", &mat2[i][j]);
		}	
	}
	
	for(i=0; i < 10; i++){
	    for(j=0; j < 10; j++){
	    	multiM[i][j] = mat1[i][j] * mat2[i][j];
		}	
	}
	
	printf("\n");
	
	for(i=0; i < 10; i++){
	    for(j=0; j < 10; j++){
	    	printf("%d ", multiM[i][j]);
		}	
		
		printf("\n");
	}
	
	return 0;
}
