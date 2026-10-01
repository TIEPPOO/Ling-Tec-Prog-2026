#include <stdio.h>
#include <stdlib.h>


//prova MA
void ex0(){
	
	int n1, n2, n3, n4;
	
	printf("Digite os numeros: \n");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	printf("Os numeros impares sao: \n");
	if (n1 % 2 == 1) {
    printf("%d e um numero impar\n", n1);
	}	

	if (n2 % 2 == 1) {
    printf("%d e um numero impar\n", n2);
	}

	if (n3 % 2 == 1) {
	    printf("%d e um numero impar\n", n3);
		}
	
		if (n4 % 2 == 1) {
    printf("%d e um numero impar\n", n4);
	}
	else{
		printf("Nao a numeros impares \n");
	}
	
	
	printf("Os numeros multiplos por 5 sao:\n ");
	
	if (n1 % 5 == 0) {
    	printf("%d e multiplo de 5\n", n1);
    }

    if (n2 % 5 == 0) {
		printf("%d e multiplo de 5\n", n2);
    }

    if (n3 % 5 == 0) {
    	printf("%d e multiplo de 5\n", n3);
    }

    if (n4 % 5 == 0) {
		printf("%d e multiplo de 5\n", n4);
    }
	else{
		printf("Nao a numeros multiplos");
	}	

	}
void ex01(){
	int qntd_itens, capacidade, mochila;
	
	printf("Quantos itens serao levados?\n");
	scanf("%d", &qntd_itens);
	
	printf("Qual a capacidade maxima de cada mochila?\n");
	scanf("%d", &capacidade);
	
	if(qntd_itens < 1 || capacidade < 1){
		printf("Nenhuma mochila sera preenchida\n");
	}
	else{
	mochila = qntd_itens / capacidade;
	printf("O número de mochilas completas sera: %d", mochila);
	}
}

void ex02 (){
	float valor, resultado;
    int codigo;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Digite o codigo da conversao: ");
    scanf("%d", &codigo);

    switch(codigo) {

        case 1:
        resultado = valor * 1.8 + 32;
        printf("Resultado: %.2f F\n", resultado);
        break;

        case 2:
        resultado = (valor - 32) / 1.8;
        printf("Resultado: %.2f C\n", resultado);
        break;

        case 3:
        resultado = valor - 273.15;
        printf("Resultado: %.2f C\n", resultado);
        break;

        case 4:
        resultado = valor / 1609.34;
        printf("Resultado: %.2f mi\n", resultado);
        break;

        case 5:
        resultado = valor * 1609.34;
        printf("Resultado: %.2f m\n", resultado);
        break;

        case 8:
        resultado = valor * 2.205;
        printf("Resultado: %.2f lb\n", resultado);
        break;

        case 9:
        resultado = valor / 2.205;
        printf("Resultado: %.2f kg\n", resultado);
        break;

        case 10:
        resultado = valor / 1.609;
        printf("Resultado: %.2f mph\n", resultado);
        break;

        case 11:
        resultado = valor * 1.609;
        printf("Resultado: %.2f km/h\n", resultado);
        break;

        default:
        printf("Erro: codigo de conversao invalido!\n");
    }
}

void p1ex0(){
	int um, dois, tres, qua, qui;
	int validador = 0; 
	
	
	printf("Digite 05 numeros: ");
	scanf("%d %d %d %d %d", &um, &dois, &tres, &qua, &qui);
	
	

	if (dois == um + 1) { printf("%d e %d\n", um, dois); validador = 1; }
	if (tres == um + 1) { printf("%d e %d\n", um, tres); validador = 1; }
	if (qua == um + 1)  { printf("%d e %d\n", um, qua);  validador = 1; }
	if (qui == um + 1)  { printf("%d e %d\n", um, qui);  validador = 1; }


	if (um == dois + 1)   { printf("%d e %d\n", dois, um);   validador = 1; }
	if (tres == dois + 1) { printf("%d e %d\n", dois, tres); validador = 1; }
	if (qua == dois + 1)  { printf("%d e %d\n", dois, qua);  validador = 1; }
	if (qui == dois + 1)  { printf("%d e %d\n", dois, qui);  validador = 1; }

	if (um == tres + 1)   { printf("%d e %d\n", tres, um);   validador = 1; }
	if (dois == tres + 1) { printf("%d e %d\n", tres, dois); validador = 1; }
	if (qua == tres + 1)  { printf("%d e %d\n", tres, qua);  validador = 1; }
	if (qui == tres + 1)  { printf("%d e %d\n", tres, qui);  validador = 1; }

	if (um == qua + 1)   { printf("%d e %d\n", qua, um);   validador = 1; }
	if (dois == qua + 1) { printf("%d e %d\n", qua, dois); validador = 1; }
	if (tres == qua + 1) { printf("%d e %d\n", qua, tres); validador = 1; }
	if (qui == qua + 1)  { printf("%d e %d\n", qua, qui);  validador = 1; }

	if (um == qui + 1)   { printf("%d e %d\n", qui, um);   validador = 1; }
	if (dois == qui + 1) { printf("%d e %d\n", qui, dois); validador = 1; }
	if (tres == qui + 1) { printf("%d e %d\n", qui, tres); validador = 1; }
	if (qua == qui + 1)  { printf("%d e %d\n", qui, qua);  validador = 1; }


	if (validador == 0) {
		printf("Erro\n");
}
}

void p1ex1(){
	
	float imc,peso,altura;
	
	printf ("Insira qual a sua altura:  ");
	scanf("%f", &altura);
	
	printf("\nInsira qual o seu peso:  ");
	scanf("%f", &peso);
	
	imc = peso / (altura*altura);
	
	if (imc < 18.5){
	  printf("\nSeu IMC :  %f , seu resultado e: Abaixo do Peso",imc);
     }
   		 else if (imc <= 24.9  &&  imc >= 18.5){
	      printf("\nSeu IMC  : %f , seu resultado e: Normal", imc);
	    }
   		else if (imc >= 25.0 &&  imc <= 29.9 ){
	      printf ("\nSeu IMC :  %f , seu resultado e: Acima do peso ", imc);
	    }
    	else if (imc >= 30 ){
	   	 printf ("\nSeu IMC : %f, seu resultado e: Obeso", imc);
	   }
}

void p1ex2(){
	printf("Hanoi\n\n");
	
	int a, b, c;
	int disco_3, disco_2, disco_1;
	
	disco_1 = 1;
	disco_2 = 2;
	disco_3 = 3;
	
	// Torre
	a = disco_3 + disco_2 + disco_1;
	b = 0;
	c = 0;
	printf("Inicio: %d %d %d\n", a, b, c);
	
	// 1
	a = disco_3 + disco_2;
	b = 0;
	c = disco_1;
	printf("Passo 1: %d %d %d\n", a, b, c);
	
	// 2
	a = disco_3;
	b = disco_2;
	c = disco_1;
	printf("Passo 2: %d %d %d\n", a, b, c);
	
	// 3
	a = disco_3;
	b = disco_2 + disco_1;
	c = 0;
	printf("Passo 3: %d %d %d\n", a, b, c);
	
	// 4
	a = 0;
	b = disco_2 + disco_1;
	c = disco_3;
	printf("Passo 4: %d %d %d\n", a, b, c);
	
	// 5 
	a = disco_1;
	b = disco_2;
	c = disco_3;
	printf("Passo 5: %d %d %d\n", a, b, c);
	
	// 6
	a = disco_1;
	b = 0;
	c = disco_3 + disco_2;
	printf("Passo 6: %d %d %d\n", a, b, c);
	
	// 7
	a = 0;
	b = 0;
	c = disco_3 + disco_2 + disco_1;
	printf("Passo 7: %d %d %d\n", a, b, c);
}

void p2ex1(){
	int a,b,c;
 
 printf("Insira o numero A:  ");
 scanf("%d", &a);
 
 printf("Insira o numero B:  ");
 scanf("%d", &b);
 
 printf("Insira o numero C:  ");
 scanf("%d", &c);
	
	
	if (a==b || a==c || b==c){   // CORRECAO: testa cada par
	
	printf("OS numeros tem que ser distintos\n");
}

	  else if (a > b && a > c && b > c){
	  
    	printf ("A ordem fica, %d  %d %d\n", c,b,a);
    }
    
	  else if (a > b && a > c && c > b){   // CORRECAO: caso que faltava
	  
    	printf ("  %d %d %d\n", b,c,a);
    }
	
	  else if ( b> a && b>c && a>c){
	  
    	printf ("  %d %d %d\n", c,a,b);
    }
     
	  else if ( b > a && b>c && c>a){
	  
    	printf ("  %d %d %d\n", a,c,b);
    }
   
   	  else if ( c> a && c>b && a>b){
		
	   printf ("  %d %d %d\n", b,a,c);
}
	
	  else if ( c >a && c> b && b>a){   // CORRECAO: removido o ; antes da {
    	printf ("  %d %d %d\n", a,b,c);
    }
}

void p2ex2(){
	float valor1, valor2;
	int codigo;
	
	// Leitura dos dois operandos e do codigo da operacao
	printf("Insira o primeiro valor:  ");
	scanf("%f", &valor1);
	
	printf("Insira o segundo valor:  ");
	scanf("%f", &valor2);
	
	printf("Insira o codigo da operacao (1 >, 2 <, 3 ==, 4 !=):  ");
	scanf("%d", &codigo);
	
	// Cada codigo testa uma operacao relacional entre valor1 e valor2
	switch (codigo){
		
		case 1: // Maior que
		if (valor1 > valor2){
			printf("Verdadeiro\n");
		}
		else{
			printf("Falso\n");
		}
		break;
		
		case 2: // Menor que
		if (valor1 < valor2){
			printf("Verdadeiro\n");
		}
		else{
			printf("Falso\n");
		}
		break;
		
		case 3: // Igual a
		if (valor1 == valor2){
			printf("Verdadeiro\n");
		}
		else{
			printf("Falso\n");
		}
		break;
		
		case 4: // Diferente de
		if (valor1 != valor2){
			printf("Verdadeiro\n");
		}
		else{
			printf("Falso\n");
		}
		break;
		
		default: // Qualquer outro codigo
		printf("operador invalido\n");
	}
}

int main(int argc, char *argv[]) {
	
	int escolha_prova, escolha_ex;
	printf("+-------------------------------------------+\n");
	printf("|                   PROVAS                  |\n");
	printf("+-------------------------------------------+\n");
	printf("| Escolha uma prova(1-2-3):                 |\n");
	printf("| 1 - ADSIS N A                             |\n");
	printf("| 2 - ESOFT M A                             |\n");
	printf("| 3 - ESOFT M B                             |\n");
	printf("+-------------------------------------------+\n");	
	scanf("%d", &escolha_prova);
	
	switch(escolha_prova){
		case 1:
		printf("+-------------------------------------------+\n");
		printf("|                 EXERCICIOS                |\n");
		printf("+-------------------------------------------+\n");
		printf("| Escolha um exercicio(1-2-3):              |\n");
		printf("| 1 - EX 0                                  |\n");
		printf("| 2 - EX 1                                  |\n");
		printf("| 3 - EX 2                                  |\n");
		printf("+-------------------------------------------+\n");
		scanf("%d", &escolha_ex);
			switch (escolha_ex){
			
				case 1:
				p1ex0();
				break;
				
				case 2:
				p1ex1();
				break;
				
				case 3:
				p1ex2();
				break;		
			} // fecha o switch de exercicios da prova 1

		break;
		
		case 2:
		printf("+-------------------------------------------+\n");
		printf("|                 EXERCICIOS                |\n");
		printf("+-------------------------------------------+\n");
		printf("| Escolha um exercicio(1-2-3):              |\n");
		printf("| 1 - EX 0                                  |\n");
		printf("| 2 - EX 1                                  |\n");
		printf("| 3 - EX 2                                  |\n");
		printf("+-------------------------------------------+\n");		
		scanf("%d", &escolha_ex);
			switch (escolha_ex){
			
				case 1:
				ex0();
				break;
				
				case 2:
				ex01();
				break;
				
				case 3:
				ex02();
				break;
			} // fecha o switch de exercicios da prova 2

		break;
				
		case 3:
		printf("+-------------------------------------------+\n");
		printf("|                 EXERCICIOS                |\n");
		printf("+-------------------------------------------+\n");
		printf("| Escolha um exercicio(1-2-3):              |\n");
		printf("| 1 - EX 0                                  |\n");
		printf("| 2 - EX 1                                  |\n");
		printf("| 3 - EX 2                                  |\n");
		printf("+-------------------------------------------+\n");		
		scanf("%d", &escolha_ex);
			switch (escolha_ex){
			
				case 1:
				ex01();
				break;
				
				case 2:
				p2ex1();
				break;
				
				case 3:
				p2ex2();
				break;
		
	} // fecha o switch de exercicios da prova 3
	

} // fecha o switch de provas

return 0;
}
