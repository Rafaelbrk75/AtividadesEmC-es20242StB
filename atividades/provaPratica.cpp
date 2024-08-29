#include <stdio.h>
/*Entrada: 6 números
    Saída: Mostrar o maior e menor valor*/
int main(){
    int n1,n2,n3,n4,n5,n6;
    int maior,menor;

    printf("Comparacao de maior e menor valor de 6 numeros \n");
    printf("Informe um valor:\n");
    scanf("%d",&n1);

    printf("Informe um segundo valor:\n");
    scanf("%d",&n2);

    printf("Informe um terceiro valor:\n");
    scanf("%d",&n3);

    printf("Informe um quarto valor:\n");
    scanf("%d",&n4);

    printf("Informe um quinto valor:\n"); 
    scanf("%d",&n5);

    printf("Informe o ultimo valor:\n");
    scanf("%d",&n6);

    if(n1>n2&&n1>n3&&n1>n4&&n1>n5&&n1>n6){
        maior = n1;
    } else if(n2>n3&&n2>n4&&n2>n5&&n2>n6){
        maior = n2;
    }else if(n3>n4&&n3>n5&&n3>n6){
        maior = n3;
    }else if(n4>n5&&n4>n6){
        maior = n4;
    }else if(n5>n6){
        maior = n5;
    }else maior = n6;

    if(n1<n2&&n1<n3&&n1<n4&&n1<n5&&n1<n6){
        menor = n1;
    } else if(n2<n3&&n2<n4&&n2<n5&&n2<n6){
        menor = n2;
    }else if(n3<n4&&n3<n5&&n3<n6){
        menor = n3;
    }else if(n4<n5&&n4<n6){
        menor = n4;
    }else if(n5<n6){
        maior = n5;
    }else menor = n6;

    printf("O maior valor e %d \n E o menor e %d", maior,menor);

return 0;
}
