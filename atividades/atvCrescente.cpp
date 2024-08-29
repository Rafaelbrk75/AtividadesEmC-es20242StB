#include <stdio.h>
//Peça 5 números ao usuário e depois apresente eles em ordem crescente.
//Entrada: pedir 5 números
//Saída: apresentar eles em ordem crescente
int main(){
    int n[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Informe o %d numero: ", i+1);
        scanf("%d",&n[i]);
    }

}
