#include <stdio.h>

int maior(float x[]);
int menor(float x[]);

int main(){
	
	char nome[3][80];
	int i, j;
	float nota[3], soma = 0;
	int maiorN, menorN;
	
	for(i=0; i<3; i++){
		printf("Informe seu nome: ", i);
		scanf("%s", nome[i]);
        printf("Informe sua nota: ");
        scanf("%f", &nota[i]);
		soma += nota[i];
		printf("\n");
    }
    
    maiorN = maior(nota);
	menorN = menor(nota);
	
	printf("A media da turma foi: %.2f\n", soma/3);
	printf("A maior nota foi %.2f do(a) aluno(a): %s. \n", nota[maiorN], nome[maiorN]);
	printf("A menor nota foi %.2f do(a) aluno(a): %s.\n", nota[menorN], nome[menorN]);
	
	return 0;
}

int maior(float x[]){
	float tmp;
	int i, maiorN;
	
	tmp = x[0];
	
	for(i=1; i<3; i++){
		if(tmp < x[i]){
			maiorN = i;	
		}
	}
	
	return maiorN;	
}

int menor(float x[]){
	float tmp, menorN;
	int i;
	
	menorN = x[0];
	
	for(i=1; i<3; i++){
		if(tmp > x[i]){
			menorN = i;	
		}
	}
	
	return menorN;	
}
