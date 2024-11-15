#include <stdio.h>

int main(){
	FILE *arqui;
	arqui = fopen("nomeNota.txt", "r");
	
	if (arqui == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
	
	float nota, soma;
	int i =0;
	char nome[50];
	
	while(fscanf(arqui, "%s %f", nome, &nota ) != EOF){
		i++;
		soma += nota;
	}
	
	fclose(arqui);
	
	if(i == 0){
		printf("Nenhum dado foi encontrado no arquivo!");
	}else{
		printf("A media das notas e: %.2f", soma/i);
	}
	
	return 0;
}
