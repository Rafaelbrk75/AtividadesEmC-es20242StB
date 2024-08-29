#include <stdio.h>

int main() {
	int n1;
	printf("Digite um numero\n");
	scanf("%d", &n1);
	if(n1%3 == 0) printf("%d e divisivel por 3 e 7", n1);
	else printf("%d nao e divisivel por 3 e 7", n1);
	
	return 0;
}
