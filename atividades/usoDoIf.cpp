#include <stdio.h>

int main() {
	int n1,n2;
	printf("Digite n1 e n2 para a divisao n1 por n2\n");
	scanf("%d%d", &n1,&n2);
	if(n2 == 0) printf("Nao e permitido divisao por 0");
	else printf("%d/%d = %.2f", n1,n2, (float)n1/n2);
	
	return 0;
}
