#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia 10 valores do teclado,
e mostre na tela o maior entre os 5 priemerios
e o mmeor entre is 05 restantes */

int comp_maior (int a, int b){
	if (a>b) return a;
	else return b;
}


int main(int argc, char *argv[]) {
	
	int valor[10];
	int i;
	
	printf("Leia os numeros");
	// PARA (INICIAL, CONDICAO, INCREMENTO)
	for(i=0; i<10; i++){
		scanf("%f", &valor[i]);
	}
	for(i=9; i>0; i--){
		printf("|%f|", valor[i]);	
	}
	
	return 0;
}
