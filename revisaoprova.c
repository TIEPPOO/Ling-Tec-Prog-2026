#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int um, dois, tres, qua, qui;
	
	int pri, sec, ter, quatro, quin;
	
	printf("Insira 5 numeros: ");
	scanf("%d, %d, %d, %d, %d", &um, &dois, &tres, &qua, &qui);
	
	if (um = (dois+1) || um == (tres + 1) || um == (qua+1) || um == (qui +1)){
			pri = um;
		}
	if (dois == (um - 1) || dois == (tres + 1) || dois == (qua+1) || dois == (qui +1)){
		sec = dois;
		}
	
	if( tres == (um-1) || tres == (dois-1) || tres == (qua+1) || dois == (qui +1)){
		ter = tres;
	}
	
	
	
	printf("%d %d %d %d %d", pri, sec, ter, quatro, quin);
	
	
	
	
	return 0;
}
