#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int pac, quant;
	float desc;
    
    const float pac1= 3400.00;
	const float pac2 = 4890.00;
    
    //Pacote 1
    printf("1. Aventura na Terra dos Gelo \nDestino: Antártica \nDuração: 7 dias \nAtrações: \nPasseio de barco entre icebergs e avistamento de pinguins \nSafari fotográfico de vida selvagem com guias especializados");
    printf("Caminhada guiada sobre gelo com equipamentos de segurança \nAcampamento noturno em uma estação de pesquisa científica \nAcomodações: Barco de expedição com cabines confortáveis e restaurante gourmet");
    printf("\nValor: R$%.2f", pac1);
    
    //pacote 2
    printf("\n\n2. Oásis Cultural do Oriente \nDestino: Marrocos \nDuração: 10 dias \nAtrações: \nTour pelas medinas de Marrakech e Fez com guias locais \nPasseio de camelo pelo deserto do Saara e noite em um acampamento berbere");
    printf("Visita a mercados tradicionais e workshops de artesanato local \nAulas de culinária para aprender a preparar pratos típicos marroquinos \nAcomodações: Riads luxuosos e acampamentos confortáveis no deserto");
    printf("\nValor: %f", pac2);
    
    printf("\n\nQual é o pacote desejado (1 ou 2):");
    scanf("%d", &pac);
    
    switch(pac){
    	case 1:
    		printf("O pacote sera para quantas pessoas? ");
    		scanf("%d", &quant);
    		
    		if(quant >=3 && quant <= 5){
    			
				desc = quant*pac1;
				desc= desc-(desc*0.20);
    			printf("A seu pacote teve um desconto de 20 porcento totalizando: R$%.2f", desc);
    			
			}else if(quant > 5) {
				
				desc = quant*pac1;
				desc= desc-(desc*0.25);
			    printf("A seu pacote teve um desconto de 25 porcento totalizando: R$%.2f", desc);
			}
    		
    		break;
    	
    	case 2:
    		printf("O pacote sera para quantas pessoas? ");
    		scanf("%d", &quant);
    		
    		if(quant >=3  && quant <= 5){
    			
				desc = quant*pac2;
				desc= desc-(desc*0.20);
    			printf("A seu pacote teve um desconto de 20 porcento totalizando: R$%.2f", desc);
    			
			}else if(quant >5) {
				
				desc = quant*pac2;
				desc= desc-(desc*0.25);
			    printf("A seu pacote teve um desconto de 25 porcento totalizando: R$%.2f", desc);
			
    	    }
    		break;
    	
    	default:
    		
    		printf("Esse pacote não existe!");
    		
    		break;
	}
    return 0;
}
