#include <stdio.h>
#include <stdlib.h>

/*
	faça um programa que leia 1o numeros, inteiros positivos, ignorando os negativos calcule a soma e a media e mostre na tela.
	OBS: Somente com 03 variaveis (i, n,s).Nao pode ser vetor
	Nao pode usar laço FOR
 */

int main(int argc, char *argv[]) {
	
	
	int i, n, s;
	s=0;
	
	while(i<10){
		scanf("%d,", &n);
		if (n>0){
			s += n;
			i++;
		}
	}
	printf("%d | %d", s, s/10);
	
	
	return 0;
}
