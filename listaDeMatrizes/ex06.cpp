#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat1[4][4], i, j;

	
	for(i=0; i < 4; i++){
	    for(j=0; j < 4; j++){
	    	printf("\nInforme o valor da posição [%d][%d] : ", i, j);
	    	scanf("%d", &mat1[i][j]);
		}	
	}
	
	printf("\n");
	
	for(i=0; i < 4; i++){
    	printf("%d ", mat1[i][i]);	
	}
	
	return 0;
}
