#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char usuario_correto[] = "Rafael";
    char senha_correta[] = "bolaverde";

    
    char usuario[20];
    char senha[20];

    // Solicita nome de usu�rio
    printf("Digite o nome de usu�rio: ");
    scanf("%s", usuario);

    // Solicita senha
    printf("Digite a senha: ");
    scanf("%s", senha);

    // Verifica se o nome de usu�rio e senha est�o corretos
    if (strcmp(usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
        printf("Acesso concedido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}
