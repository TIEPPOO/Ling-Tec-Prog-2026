#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&primeiro);
	printf("Digite o segundo Valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	
	printf("%d \n %d", primeiro, segundo);
	
	
	
///////// segundo round ////////
	
	double cotacao1, cotacao2, soma;
	
	printf("\nDigite primeiro numero: ");
	scanf("%lf", &cotacao1);
	printf("\nDigite segundo numero: ");
	scanf("%lf", &cotacao2 );
	
	soma = (cotacao1 + cotacao2);
	
	printf("%lf", soma);
	
/////////////// 3 round  //////
	
	int n;
	int bits[7];
	int i;
	
	printf("\nDigite um numero para transformar em binario (menor que 64): ");
	scanf("%d", &n);
	
	if (n <= 0 || n >= 64) 
	{
    printf("Numero invalido\n");
    return 1;
	}
	
	while (n > 0) {
    bits[i] = n % 2;
    n = n / 2;
    i++;
}

printf("Em binario: ");
int j = i - 1;
while (j >= 0) {
    printf("%d", bits[j]);
    j--;
	}
  
    printf("\n");
  
    

//////////////// round 4 /////////

	float salariobase, vendas, comissao;
	
	printf("\nQual seu salario base: ");
	scanf("%f", &salariobase);
	
	printf("\nQual o valor de suas vendas: ");
	scanf("%f", &vendas);
	
	
	comissao = salariobase + (vendas * 0.15);
	
	printf("Seu salario vai ser: %f", comissao);
	
	
	
	
	



  
	
	
	
	
	
	
	
	
	
	
	return 0;
	

}
