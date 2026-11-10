#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//bloco de codigo reutilizavel por todo o programa, que recebe dois valores inteiros para realizar o calculo
int calculo_maior(int a, int b){
	return ((a+b+(abs((a-b))))/2);
}


int main(int argc, char *argv[]) {
/*(URI 1013) Faça um programa que leia 10 valores e apresente o maior dos 10 valores */
	
	int vet[10];
	int i, maior;
	
	for(i=0; i<10; i++){
		printf("Coloque um numero: ");
		scanf("%d", &vet[i]);
	}
	// inicializacao verificacao incremento
	for (i=1, maior=vet[0]; i<10; i++){
		maior = calculo_maior(maior, vet[i]);
	}
	
	printf("%d eh o maior", maior);
	
	
	return 0;

	
}
