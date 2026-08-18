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
	
	i	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	
	printf("Insira o valor: ");
	scanf("%d", &n);
	
	bit_64 = n%2; /////% resto da divisão
	res = n/2; //// sempre calcular na mão
	
	bit_32 = res%2;
	res = res/2;
	
	bit_16 = res%2;
	res = res/2;
	
	bit_8 = res%2;
	res = res/2;
	
	bit_4 = res%2;
	res = res/2;
	
	bit_2 = res%2;
	res = res/2;
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n, res%2,bit_2, bit_4, bit_8, bit_16,bit_32, bit_64);
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
