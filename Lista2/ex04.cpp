#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arqui;

	arqui = fopen("aleatorios.txt", "w");
	
	if (arqui == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
	
	int num, i;
	
	for(i=0; i< 10; i++){
		num = rand()%100;
		fprintf(arqui, "%d\n", num);
	}
	
	fclose(arqui);


	return 0;
}
