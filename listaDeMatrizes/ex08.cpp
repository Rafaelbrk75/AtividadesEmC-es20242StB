#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat1[3][3], i, j, teste;

	
	for(i=0; i < 3; i++){
	    for(j=0; j < 3; j++){
	    	printf("\nInforme o valor da posição [%d][%d] : ", i, j);
	    	scanf("%d", &mat1[i][j]);
		}	
	}
	
	teste = 0;
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			if(mat1[x][j] != mat1[j][x]){
				teste = 1;
			}
		}	
	}
	
	if(teste != 0){
		printf("Essa matriz não e simetrica!");
	}else{
		printf("Essa matriz é simetrica!");
	}
	
	return 0;
}
