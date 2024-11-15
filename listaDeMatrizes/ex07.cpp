#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat1[3][3], i, j;

	
	for(i=0; i < 3; i++){
	    for(j=0; j < 3; j++){
	    	printf("\nInforme o valor da posição [%d][%d] : ", i, j);
	    	scanf("%d", &mat1[i][j]);
		}	
	}
	
	printf("\n");
	
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			printf("%d ", mat1[j][i]);
		}	
		printf("\n");
	}
	
	return 0;
}
