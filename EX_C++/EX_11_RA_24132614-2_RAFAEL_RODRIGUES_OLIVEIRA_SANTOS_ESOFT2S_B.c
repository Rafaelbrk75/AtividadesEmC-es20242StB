#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int lad1,lad2,lad3;
    
    printf("Informe um lado do tri�ngulo: ");
    scanf("%d", &lad1);
    
    printf("Informe o segundo lado: ");
    scanf("%d", &lad2);
    
    printf("Informe o ter�eiro lado: ");
    scanf("%d", &lad3);   
    
    if(lad1 == lad2 && lad2 == lad3){
    	
    	printf("E um tri�ngulo Equil�tero!\n");
    	
	}else if(lad1 == lad2 || lad2 == lad3 || lad1 == lad3){
		
		printf("E um Tri�ngulo Is�sceles!\n");
		
	}else if(lad1 != lad2 && lad2!= lad3 && lad1 != lad3) {
	 
	    printf("E um Tri�ngulo Escaleno!\n");
	    
    } else printf("N�o � um tri�ngulo!\n");

    return 0;
}
