#include <stdio.h>

void crescente(int x[]);

int main(){
	FILE *arqui, *copia;

	arqui = fopen("aleatorios.txt", "r");
	copia = fopen("ordenados.txt", "w");
	
	if (arqui == NULL || copia == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int i, num[10];
    i=0;
    
    while(fscanf(arqui, "%d", &num[i]) == 1){
    	i++;
	}
	
	crescente(num);
    
    for(i=0; i<10; i++){
    	fprintf(copia, "%d\n", num[i]);
	}
	
	fclose(copia);
	return 0;
}

void crescente(int x[]){
	int i, j, tmp;
	
	for(i=0; i<9; i++){
		for(j=i+1; j<10; j++){
		  if(x[i] > x[j]){
			tmp = x[i];
			x[i] = x[j];
			x[j] = tmp;	
		  }
	    }
	}
}
