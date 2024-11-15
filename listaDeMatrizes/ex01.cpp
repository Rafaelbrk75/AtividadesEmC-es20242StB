#include <stdio.h>

int main(){
	int num[3][3];
	int i, j;
	
	for(i=0; i < 3; i++){
		for(j=0; j<3; j++){
			printf("Informe um número [%d][%d]: ", i, j);
			scanf("%d", &num[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j < 3; j++){
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
