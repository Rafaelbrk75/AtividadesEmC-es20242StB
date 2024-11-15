#include <stdio.h>

int main(){
	FILE *arqui;
	arqui = fopen("teste.txt", "r");
	
	char pala[100];
	int soma;
	soma =0;
	
	while(fscanf(arqui, "%s", &pala) != EOF){
		soma++;
	}
	
	fclose(arqui);
	
	printf("O arquivo possui %d de palavras!", soma);
	
	return 0;
}
