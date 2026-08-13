#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro valor");
	scanf("%d",&primeiro);
	printf("Digite o segundo Valor");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	
	printf("%d \n %d", primeiro, segundo);
	
	
	
	///////// segundo round ////////
	
	double cotacao1, cotacao2, soma;
	
	printf("\nDigite primeiro numero");
	scanf("%lf", &cotacao1);
	printf("\nDigite segundo numero");
	scanf("%lf", &cotacao2 );
	
	soma = (cotacao1 + cotacao2);
	
	printf("%lf", soma);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	

}
