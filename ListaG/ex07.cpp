#include <stdio.h>

int main(){
	FILE *arqui;
	arqui = fopen("calc.txt", "r");
	
	if(arqui == NULL){
		printf("Erro ao abrir o arquivo!");
		return 1;
	}
	
	int soma, num, cont;
	soma =0;
	cont =0;
	
	while(fscanf(arqui, "%d", &num) == 1){
		soma++;
		cont += num;
		
		fgetc(arqui);
	}
	
	fclose(arqui);
	
	printf("A media dos numeros e: %d", cont/soma);
	
	return 0;
}
