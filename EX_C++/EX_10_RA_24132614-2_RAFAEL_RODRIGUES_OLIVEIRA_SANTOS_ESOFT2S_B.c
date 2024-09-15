#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n1,n2,n3,n4;
    float media;
    
    printf("Aluno1 informe sua nota: ");
    scanf("%d", &n1);
    
    if(n1 < 1 && n1> 10){
    	
	    printf("Aluno1 informe sua nota novamente: ");
        scanf("%d", &n1);	
	}
    
    printf("Aluno2 informe sua nota: ");
    scanf("%d", &n2);
	
	if(n2 < 1 && n2> 10){
    	
	    printf("Aluno2 informe sua nota novamente: ");
        scanf("%d", &n2);	
	}  
	
	media = n1+n2 ; 

    
    printf("Aluno3 informe sua nota: ");
    scanf("%d", &n3);
    
    if(n3 < 1 && n3> 10){
    	
	    printf("Aluno3 informe sua nota novamente: ");
        scanf("%d", &n3);	
	}
	
	media = media + n3;

    printf("Aluno4 informe sua nota: ");
    scanf("%d", &n4); 
    
    if(n4 < 1 && n4> 10){
    	
	    printf("Aluno4 informe sua nota novamente: ");
        scanf("%d", &n4);	
	}
	
	media = (media+n4)/4;
	
	printf("A media da turma é: %.2f\n", media);
	
	if(media >= 6.0 ){
		
		printf("Os alunos estão aprovados!");
		
	}else if(media >= 4.0){
		
		printf("Os alunos estão de recuperação!");
		
	}else printf("Os alunos reprovaram!");

		
    return 0;
}
