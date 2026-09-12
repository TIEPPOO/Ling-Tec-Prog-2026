#include <stdio.h>
#include <stdlib.h>

	
int main(int argc, char *argv[]) {


int resposta;

printf("Qual o pokemon(ex) voce quer calular?  1|2|3|4|5|6|7|8|\n ");
scanf("%d", &resposta);




switch(resposta){

case 1:

;
int a,b;
	
	printf("Digite o seu primeiro numero: ");
	scanf("%d", &a);
	
	printf("Digite o seu segundo numero: ");
	scanf("%d", &b);
	
	
	printf("Os numeros digitados sao: %d %d\n", b, a);
	
	break;


//////////////////// SEGUNDO \\\\\\\\\\\\\\\\\\\\\\\



	double notacao;
	
case 2:
	
;
	
	printf("Digite a notacao: ");
	scanf("%lf", &notacao);
	
	printf("%lfx10\n", notacao);
	
	break;

////////////////////// TERCEIRO /////////////////

case 3:

;


	
int n, res;
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

break;


////////////////////////// QUARTA ///////////////////////////////////

case 4:
	
;

float salariobase, vendas, comissao;
	
	printf("\nQual seu salario base: ");
	scanf("%f", &salariobase);
	
	printf("\nQual o valor de suas vendas: ");
	scanf("%f", &vendas);
	
	
	comissao = salariobase + (vendas * 0.15);
	
	printf("Seu salario vai ser: %f", comissao);
	
	break;
	
	
//////////////////////// QUINTO //////////////////////

case 5:
	
;

	int valor1, valor2, valor3, valor4, soma, produtorio;
	float media;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);

	printf("Digite o terceiro valor: ");
	scanf("%d", &valor3);
	
	printf("Digite o quarto valor: ");
	scanf("%d", &valor4);
	
	soma = (valor1 + valor2 + valor3 + valor4);
	
	media = soma /4;
	
	produtorio = (valor1 * valor2 * valor3 * valor4);
	
	
	
	
	
	printf("A soma dos produtos:%d\n", soma);
	printf("A media dos produtos:%f\n", media);
	printf("A soma do produtorio:%d\n", produtorio);
	
break;



//////////////////////// SEXTO /////////////////////////////////

case 6:
	
;

	int idade;
	int meses, anos;
	
	printf("Qual a sua idade em dias ");
	scanf("%d", &idade);
	
	meses = idade /30;
	
	anos = idade / 360;
	
	printf("A sua idade em dias e: %d\n", idade);
	printf("A sua idade em meses e: %d\n", meses);
	printf("A sua idade em anos e: %d\n", anos);
	
break;


///////////// SETIMO /////////////////////

case 7:
	
;

	double raio, pi, volume;

    pi = 3.14159;

   
    printf("Digite o valor do raio: ");
    
  
    scanf("%lf", &raio);

    
    volume = ((4.0 / 3.0) * pi * raio * raio * raio);

    printf("VOLUME = %lf\n", volume);
    
break;


	





	////////////////// OITAVA ///////////////////////////////
	
case 8:
	
;

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
	
	break;
	
}
	
	
	return 0;
}
