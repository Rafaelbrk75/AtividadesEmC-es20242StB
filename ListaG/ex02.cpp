#include <stdio.h>

int main() {
	FILE *arquivo;
	arquivo = fopen("meuarquivo.txt", "r");
	
	if(arquivo == NULL){
		printf("Arquivo inexistente");
	}
	
	char cont[100];
	
	while(fgets(cont, sizeof(cont), arquivo) != NULL){
		printf("%s", cont);
	}
	
	return 0;
}
