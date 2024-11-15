#include <stdio.h>

int main() {
	FILE *arquivo;
	arquivo = fopen("meuarquivo.txt", "w");
	
	if(arquivo == NULL){
		printf("Arquivo inexistente");
	}
	
	fprintf(arquivo, "Hello, Mundo!");
}
