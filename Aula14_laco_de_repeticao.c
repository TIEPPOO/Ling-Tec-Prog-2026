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
	valor [0] =6;
	int i, maior, menor;
	
	printf("Leia os numeros");
	// PARA (INICIAL, CONDICAO, INCREMENTO)
	for(i=0; i<10; i++){
		scanf("%d", &valor[i]);
	}
	
	maior = valor [0];
	for(i=1, maior = valor[0]; i<5; i= i+2){
		int comp_temp = comp_maior (valor[i], valor[i+1]);
		maior = comp_maior (maior, comp_temp);
	}
	
	printf("\n %d",maior);
	
	
	return 0;
}
