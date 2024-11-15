#include <stdio.h>

int main() {
	FILE *arquivo;
	arquivo = fopen("numeros.txt", "w");

	if(arquivo == NULL){
		printf("Arquivo inexistente\n");
    }
    
    int i;
    
    for(i=0; i<10; i++){
    	fprintf(arquivo, "%d\n", i+1);
    	
	}
	fclose(arquivo);
	arquivo = fopen("numeros.txt", "r");
	
	int num, soma;
	soma =0;
	
	while(fscanf(arquivo, "%d", &num) != EOF){
		soma += num*3;
	}
	
	fclose(arquivo);
	
	printf("A soma dos numeros multiplicados: %d", soma);

	
	return 0;
}
