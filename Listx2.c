#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

////// EX 1 /////////////////

	int idade, anodenascimento, ano;
	
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	
	printf("Qual ano atual?  ");
	scanf("%d", &ano);
	
	anodenascimento = ano - idade;
	
	printf("Voce nasceu noa no de: %d",anodenascimento);



	//////////////// EX 2 //////////////////////

	float kmh, ms;
	
	printf("Quantos por HM/H voce esta? ");
	scanf("%f", &kmh);
	
	ms = kmh / 3.6;
	
	printf("A sua velocidade e: %f ", ms);
	
	
	
	return 0;


	////// EX 3 ////////////////////////

























///////////////////////////// EX 10

  int a,b,c, maior_temp, maior;
	printf("Insira os valores a serem comparados: ");
	scanf("%d %d %d",&a, &b, &c);
	
	maior_temp = ((a+b)+abs(a-b))/2; ////// ABS: valor absoluto de um número inteiro
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	
	printf("O maior entre |%d|%d|%d| = %d", a, b, c, maior);
	
	
	return 0;
}
