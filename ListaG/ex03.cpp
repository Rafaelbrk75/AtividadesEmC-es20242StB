#include <stdio.h>

int main() {
	FILE *arquivo, *arqu_nome, *arqu_nome2;
	arquivo = fopen("meuarquivo.txt", "r");
	arqu_nome = fopen ("nome1.txt", "r");
	arqu_nome2 = fopen("nome2.txt", "r");
	
	if(arquivo == NULL){
		printf("Arquivo inexistente\n");
    }else printf("\nmeuarquivo existe\n");
    
    if(arqu_nome == NULL){
		printf("Arquivo inexistente\n");
    }else printf("\n nome1 existe!");
	
	if(arqu_nome2 == NULL){
		printf("Arquivo a inexistente\n");
    }else printf("\n nome2 existe!");		
	
	return 0;
}
