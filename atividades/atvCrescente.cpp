#include <stdio.h>
//Pe�a 5 n�meros ao usu�rio e depois apresente eles em ordem crescente.
//Entrada: pedir 5 n�meros
//Sa�da: apresentar eles em ordem crescente
int main(){
    int n[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Informe o %d numero: ", i+1);
        scanf("%d",&n[i]);
    }

}
