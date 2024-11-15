#include <stdio.h>
#include <string.h>

int main() {
    FILE *arqui;
    char palavra[100], palavra_do_arquivo[100];
    int contador = 0;

    printf("Digite a palavra que deseja contar: ");
    scanf("%s", palavra);

    arqui = fopen("texto.txt", "r");
    if (arqui == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arqui, "%s", palavra_do_arquivo) != EOF) {
        if (strcmp(palavra, palavra_do_arquivo) == 0) {
            contador++;
        }
    }

    fclose(arqui);

    printf("A palavra '%s' aparece %d vezes no arquivo.\n", palavra, contador);

    return 0;

