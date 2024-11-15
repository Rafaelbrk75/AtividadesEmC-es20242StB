#include <stdio.h>

int main(){
	FILE *arqui_origem, *arqui_destino;
	arqui_origem = fopen("teste.txt", "r");
	arqui_destino = fopen("copia.txt", "w");
	
	if(arqui_origem == NULL || arqui_destino == NULL){
		printf("Erro ao abrir o arquivo!");
		return 1;
	}
	
	char copia;
	
	while((copia = fgetc(arqui_origem)) != EOF){
		fputc(copia, arqui_destino);
	}
	
	fclose(arqui_origem);
	fclose(arqui_destino);
	
	return 0;
}

