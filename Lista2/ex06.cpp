#include <stdio.h>


int main(){
    FILE *arqui;

    arqui = fopen("nomeSobrenome.txt", "r");

    if (arqui == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char nome[100], sobrenome[100];
    

    printf("Lista de E-mails:\n");
    

    while (fscanf(arqui, "%s %s", nome, sobrenome) != EOF) {
        printf("%s.%s@email.com\n", nome, sobrenome);
    }

    fclose(arqui);

    return 0;
}

