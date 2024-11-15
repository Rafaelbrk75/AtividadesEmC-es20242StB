#include <stdio.h>

int main(){
	FILE *arqui;

	arqui = fopen("binario.bin", "rb");
	
	if (arqui == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
	
	int nota, soma, i;
	soma =0;
	i=0;
	
	while(fread(&nota, sizeof(int),1, arqui)== 1 ){
		i++;
		soma += nota;
	}
	
	fclose(arqui);
	
	if(i == 0){
		printf("O arquivo esta vazio!");
	}else{
		printf("A media dos numeros e: %d", soma/i);
	}

	return 0;
}
