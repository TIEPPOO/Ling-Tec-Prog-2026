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


	float dolar, real, cota;
	
	printf("Quantos reais voce tem? ");
	scanf("%f", &real);
	
	printf("Qual e a conta de hoje? ");
	scanf("%f", &cota);
	
	
	
	
	printf("%f reais sao %f em trumps\n", real, (real/cota));



//////// EX 4  /////////////////


float celsius, fahrenheit;
	
	printf(" Qual a temperatura agora: ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * (9.0/5.0) + 32.0);
	
	printf("A temperatura em fahrenheit e:%f", fahrenheit);


////////////// ex 5 ///////////////////


	float graus, pi, radianos;
	
	printf("Quantos graus tem seu angulo: ");
	scanf("%f", &graus);
	
	pi = 3.141592;
	
	radianos = (graus * pi/180);
	
	printf("Graus em radianos e: %f", radianos); 


	////////// ex 6 ///////////

	int numeroatual, sucessor, antecessor;
	
	printf("Qual numero voce quer escolher: ");
	scanf("%d", &numeroatual);
	
	sucessor = numeroatual + 1;
	antecessor = numeroatual - 1;
	
	printf("O numero sucessor de %d e %d\n", numeroatual, sucessor);
	printf("O numero antecessor de %d e %d", numeroatual, antecessor);


	/////// EX 7 ////////

















///////////////////////////// EX 10

  int a,b,c, maior_temp, maior;
	printf("Insira os valores a serem comparados: ");
	scanf("%d %d %d",&a, &b, &c);
	
	maior_temp = ((a+b)+abs(a-b))/2; ////// ABS: valor absoluto de um número inteiro
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	
	printf("O maior entre |%d|%d|%d| = %d", a, b, c, maior);
	
	
	return 0;
}
