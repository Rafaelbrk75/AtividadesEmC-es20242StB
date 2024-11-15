#include <stdio.h>

int main(){
	FILE *arqui;
	arqui = fopen("numeros.txt", "r");
	
	int soma,num;
	soma =0;
	
	while(fscanf(arqui, "%d", &num) != EOF){
		soma += num;
	}
	
	fclose(arqui);
	
	printf("A soma dos numeros e: %d", soma);
	
	return 0;
}
