#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
	
	
	printf("Digitei o seu CPF: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);
	
	int multiplicacao = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + (d6 * 5) + (d7 * 4) + (d8 * 3) + (d9 * 2);
	
	int fracao = (multiplicacao * 10) % 11;
	
	if (fracao == 10){
		fracao = 0;
	}
	

	int multiplicacao2 = (d1 * 11) + (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + (d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (d10 * 2);
	
	int fracao2 = (multiplicacao2 * 10) % 11;
	
	if (fracao2 == 10){
		fracao2 = 0;}
		
	if (d10 == fracao && d11 == fracao2){
		printf("CPF valido!!!\n");
	} else {
		printf("CPF invalido");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
