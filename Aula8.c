#include <stdio.h>
#include <stdlib.h>

void exec2(){
		float dolar, real, cota;
		scanf("%f", &real);
		scanf("%f", &cota);
		printf("%f reais sao %f em trumps/n", real, (real/cota));
	
}


int main(int argc, char *argv[]) {
	int resposta;
	printf("Usuario, qual exercicio quer resolver?  |2|3|8|\n");
	scanf("%d", &resposta);
	
	switch(resposta){
	case 2:
		exec2();
	break;
	
	
	case 3:
	
		;
		float tempC, tempF;
		scanf("%f",&tempC);
		tempF =  tempC *(9.0/5.0) + 32.0;
		printf("A temperatura maxima de hoje na tela da globo %f", tempF);
	break;
	
	
	case 8:
		
		
		;
		int segundos, horas, minutos;
		scanf("%d", &segundos);
		horas = segundos/3600;
		minutos = (segundos - (horas*3600))/60;
		segundos = segundos -((horas*3600)+(minutos*60));
		printf("Tempo %d:%d:%d",horas, minutos, segundos);
	break;
}
	

	
	
	return 0;
	
		
		
}
