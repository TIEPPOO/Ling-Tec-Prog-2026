#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	/*
	
	int a,b,c;
	int resultado;
	
	printf("Insira os valores de A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b){
		resultado = a;
	}else{
		resultado = b;
	}
	
	if (c>resultado){
		resultado = c;
	}
	
	printf("%d e maior ", resultado);
	
	*/
	
	
	int n, r;
	
	printf("Insira os valor:");
	scanf("%d", &n);
	
	
	
	if (n>0){
		r = n*-1;
    }else{
    	r = n*n;
	}
 	printf("%d", r);
	
	
	
	
	
	
	
	return 0;
}
