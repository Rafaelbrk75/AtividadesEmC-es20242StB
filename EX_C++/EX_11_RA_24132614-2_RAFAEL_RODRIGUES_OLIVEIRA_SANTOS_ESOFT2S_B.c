#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int lad1,lad2,lad3;
    
    printf("Informe um lado do triângulo: ");
    scanf("%d", &lad1);
    
    printf("Informe o segundo lado: ");
    scanf("%d", &lad2);
    
    printf("Informe o terçeiro lado: ");
    scanf("%d", &lad3);   
    
    if(lad1 == lad2 && lad2 == lad3){
    	
    	printf("E um triângulo Equilátero!\n");
    	
	}else if(lad1 == lad2 || lad2 == lad3 || lad1 == lad3){
		
		printf("E um Triângulo Isósceles!\n");
		
	}else if(lad1 != lad2 && lad2!= lad3 && lad1 != lad3) {
	 
	    printf("E um Triângulo Escaleno!\n");
	    
    } else printf("Não é um triângulo!\n");

    return 0;
}
