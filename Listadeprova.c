#include <stdio.h>
#include <stdlib.h>

int main(){

int valorUm, valorDois;	
	int operacao;
	
	printf("Digite 2 valores: ");
	scanf("%d %d", &valorUm, &valorDois);
	
	printf("Digite o codigo da operacao: ");
	scanf("%d", &operacao);
	
	switch (operacao){
	
	
	case 1:
		printf("\nVerifica se o 1 valor e estritamente maior que o 2 valor");
		if (valorUm > valorDois){
			printf("\nVerdadeiro!");
		}else{
			printf("\nFalso");
		}
		break;
	
	case 2:
		printf("\nVerifica se o 1 valor e estritamente menor que o 2 valor");
		
		if (valorUm < valorDois){
			printf("\nVerdadeiro!");
		}else{
			printf("\nFalso");
		}
		break;	
	case 3:
		printf("\nVerifica se os dois valores sao identicos");
		if (valorUm == valorDois){
			printf("\nVerdadeiro!");
		}else{
			printf("\nFalso");
		}
		break;
			
	case 4:
		printf("\nVerifica se os dois valores sao distintos entre si ");
		if (valorUm != valorDois){
			printf("\nVerdadeiro!");
		}else{
			printf("\nFalso");
		}
		break;
	default:
		printf("\nError escolha outra opcao!!");
	  	break;	
	}
	
	
	return 0;
}
