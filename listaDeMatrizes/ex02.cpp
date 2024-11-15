#include <stdio.h>

int main(){
	
	char nome[10][100];
	int i, j;
	
	for(i=0; i<10; i++){
		printf("Informe um nome [%d]: ", i, j);
		fgets(nome[i], sizeof(nome[i]), stdin); 
		printf("Informe seu sobrenome [%d]: ", i);
		fgets(sobre[i], sizeof(sobre[i]), stdin); 		
	}
	
	for(i=0; i< 10; i++){
		printf("%s %s \n", nome[i], sobre[i]);
	}
	
	return 0;
}
