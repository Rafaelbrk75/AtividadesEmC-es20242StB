#include <stdio.h>

int main() {
    FILE *arqui;
    int contador_linhas = 0;
    char caractere;

    arqui = fopen("texto2.txt", "r");
    if (arqui == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arqui)) != EOF) {
        if (caractere == '\n') {
            contador_linhas++;
        }
    }

    if (caractere != '\n' && contador_linhas > 0) {
        contador_linhas++;
    }

    fclose(arqui);

    printf("O arquivo possui %d linhas.\n", contador_linhas);

    return 0;
}


