#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo_produto, quantidade;
    float preco_unitario, preco_total = 0, desconto = 0, valor_final = 0;

    printf("Bem-vindo ao sistema de controle de estoque!\n");

 
    printf("Digite o código do produto (1-3): ");
    scanf("%d", &codigo_produto);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);


    switch(codigo_produto) {
        case 1:
            preco_unitario = 10.0; // Produto 1 custa R$10,00
            break;
        case 2:
            preco_unitario = 20.0; // Produto 2 custa R$20,00
            break;
        case 3:
            preco_unitario = 30.0; // Produto 3 custa R$30,00
            break;
        default:
            printf("Código de produto inválido!\n");
            return 1;
    }

 
    preco_total = preco_unitario * quantidade;


    if (quantidade >= 10 && quantidade < 20) {
        desconto = 0.05; 
    } else if (quantidade >= 20 && quantidade < 50) {
        desconto = 0.10; 
    } else if (quantidade >= 50) {
        desconto = 0.15; 
    }


    valor_final = preco_total * (1 - desconto);


    printf("Preço total sem desconto: R$%.2f\n", preco_total);
    printf("Desconto aplicado: %.2f%%\n", desconto * 100);
    printf("Valor final da compra: R$%.2f\n", valor_final);

    return 0;
}
