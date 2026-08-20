#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

//////////////// round 4 /////////

	float salariobase, vendas, comissao;
	
	printf("\nQual seu salario base: ");
	scanf("%f", &salariobase);
	
	printf("\nQual o valor de suas vendas: ");
	scanf("%f", &vendas);
	
	
	comissao = salariobase + (vendas * 0.15);
	
	printf("Seu salario vai ser: %f", comissao);
	
	
	
	





	////////////////// round 8

		int x1, x2, y1, y2, p1, p2;
	float dis;
	
	printf("Insira o valor do par ordenado p1(x1,y1): ");
	scanf("%d", &x1);
	scanf("%d", &y2);
	
	printf("Insira o valor do par ordenado p2(x2,y2): ");
	scanf("%d", &x2);
	scanf("%d", &y2);
	
	p1 = pow(x2-x1,2); ///pow = elevado
	p2 = pow(y2-y1,2);
	
	dis = sqrt(p1+p2);   /// sqrt raiz quadrada
	
	printf("A distancia entre P1 e P2 = %f", dis);

  
	
	
	
	
	
	
	
	
	
	
	return 0;
	

}
