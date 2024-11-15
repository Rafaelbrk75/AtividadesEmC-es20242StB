#include <stdio.h>

int main(){
	
	int mat1[3][3] = {1,3,5,7,9,11,13,15,17};
	int mat2[3][3] = {2,4,6,8,10,12,14,16,18};
	int somaM[3][3], i,j;
	
	for(i=0; i < 3; i++){
	    for(j=0; j < 3; j++){
	    	somaM[i][j] = mat1[i][j] + mat2[i][j];
		}	
	}
	
	for(i=0; i < 3; i++){
	    for(j=0; j < 3; j++){
	    	printf("%d ", somaM[i][j]);
		}	
		
		printf("\n");
	}
	
	return 0;
}
