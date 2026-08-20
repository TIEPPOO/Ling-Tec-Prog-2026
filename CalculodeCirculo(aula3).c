#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
// area do circulo
	
	float raio, area, raioQuadrado;
	
	printf("Insira o valor de R: \n");
	scanf("%f", &raio);
	
	raioQuadrado = raio*raio;
	area = pi * raioQuadrado;
	
	printf("A area do circulo de raio %f = %f\n", raio, area);
	
	// trapezio
	 
	 float b1,b2,h, area2;
	 
	 printf ("Insira base maior valor \n");
	 scanf("%f", &b1);
	 
	 printf("insira base menor valor \n");
	 scanf("%f", &b2);
	 
	 printf("Insira altura valor \n");
	 scanf("%f", &h);
	 
	 area2 = ((b1+b2)*h/2);
	 
	 printf("O valor da area do trapezio = %f\n", area2);
	 
	 
	 
	
	
	
	
	
	
	
	return 0;
}
