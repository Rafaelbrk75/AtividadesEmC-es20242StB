#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arqui, *novo_arquivo;
    char caractere;

    arqui = fopen("texto.txt", "r");
    if (arqui == NULL) {
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }

    novo_arquivo = fopen("texto_minusculo.txt", "w");
    if (novo_arquivo == NULL) {
        printf("Erro ao criar o novo arquivo.\n");
        fclose(arqui);  
        return 1;
    }

    while ((caractere = fgetc(arqui)) != EOF) {
        fputc(tolower(caractere), novo_arquivo);
    }

    fclose(arqui);
    fclose(novo_arquivo);

    printf("Novo arquivo criado com todas as letras em minúsculas.\n");

    return 0;
}

