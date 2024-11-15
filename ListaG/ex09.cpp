#include <stdio.h>

void maiorMenor(int x[]);

int main(){
	FILE *arqui;
	arqui = fopen("num.txt", "r");
	
	if(arqui == NULL){
		printf("Erro ao abrir o arquivo!");
		return 1;
	}
	
	int i,num[10];
	i=0;
	
	while(fscanf(arqui, "%d", &num[i]) != EOF){
		i++;
	}
	
	maiorMenor(num);
	
	fclose(arqui);
	
	return 0;
}

void maiorMenor(int x[]){
	int i, j, tmp;
	
	for(i=0; i<9; i++){
		for(j=i+1; j<10; j++){
		  if(x[i] > x[j]){
			tmp = x[i];
			x[i] = x[j];
			x[j] = tmp;	
		  }
	    }
	}
	
	printf("O maior numero e: %d\n", x[9]);
	printf("O menor numero e: %d\n", x[1]);
}
