#include <stdio.h>
#include <stdlib.h>

// O programa recebe o valor de uma divida e mostra:
// valor da divida, valor dos juros, quantidade de parcelas e valor da parcela.

int main(){



    float valor_divida, juros, parcela_divida;
    int parcela;

// Programa solicita a entrada dos dados do usuario para definir o valor e quantidade de parcelas.


	printf("+--------------------------------------------+| SIMULACAO DE PARCELAMENTO |+-------------------------------------------+\n");

    printf("\nInsira o valor a pagar: ");
    scanf("%f", &valor_divida);
    printf("\nInforme a quantidade de parcelas |1|2|3|4|5|6|7|8|9|10| ?: \n");
    scanf("%d", &parcela);

// Calculo da divida e parcelas a ser cobrado.

    switch (parcela){

        case 1:
            juros = valor_divida;
            printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n",0  );
			printf("| Juros ao mes:  0%%                          |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n", juros);
			printf("+--------------------------------------------+\n");
            break;
            
        case 2:
			juros = valor_divida * 1.05;
			parcela_divida = juros / 2;
			printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n", 2);
			printf("| Juros ao mes:  5%%                          |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
			printf("+--------------------------------------------+\n");
			
		
            break;

        case 3:
            juros = valor_divida * 1.10;
            parcela_divida = juros / 3;
            printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n", 3);
			printf("| Juros ao mes:  10%%                         |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
			printf("+--------------------------------------------+\n");
            break;
            
        case 4:
        	juros = valor_divida * 1.15;
            parcela_divida = juros / 4;
            printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n", 4);
			printf("| Juros ao mes:  15%%                         |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
			printf("+--------------------------------------------+\n");
            break;
            
        case 5:
        	juros = valor_divida * 1.20;
            parcela_divida = juros / 5;
            printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n", 5);
			printf("| Juros ao mes:  20%%                         |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
			printf("+--------------------------------------------+\n");
            break;

		case 6:
			juros = valor_divida * 1.30;
            parcela_divida = juros / 6;
            printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n", 6);
			printf("| Juros ao mes:  30%%                         |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
			printf("+--------------------------------------------+\n");
            break;
            
        case 7:
        	juros = valor_divida * 1.35;
            parcela_divida = juros / 7;
            printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n", 7);
			printf("| Juros ao mes:  35%%                         |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
			printf("+--------------------------------------------+\n");
            break;
            
        case 8:
        	juros = valor_divida * 1.40;
            parcela_divida = juros / 8;
            printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n", 8);
			printf("| Juros ao mes:  40%%                         |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
			printf("+--------------------------------------------+\n");
            break;	
            
        case 9:
        	juros = valor_divida * 1.45;
            parcela_divida = juros / 9;
            printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n", 9);
			printf("| Juros ao mes:  45%%                         |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
			printf("+--------------------------------------------+\n");
            break;
            
        case 10:
        	juros = valor_divida * 1.50;
            parcela_divida = juros / 10;
            printf("+--------------------------------------------+\n");
			printf("| Descricao:     Emprestimo Pessoal          |\n");
			printf("| Valor total:   R$: %-23.2f |\n", juros);
			printf("| Qtd. parcelas: %-27d |\n", 10);
			printf("| Juros ao mes:  50%%                         |\n");
			printf("+--------------------------------------------+\n");
			printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
			printf("+--------------------------------------------+\n");;
            break;
            
        default:
        	printf("\nOpcao Invalida!"); // Caso o usuario digite algo de diferente do programa, retorna a mensagem.
        	break;
    
		    	
        	
    }

	printf("\n+--------------------------------------------+\n");
    printf("|            SIMULACAO FINALIZADA            |\n");
    printf("+--------------------------------------------+\n");
    printf("| Instituicao:   BANCO MASTER                |\n");
    printf("| -------------------------------------------|\n");
    printf("+--------------------------------------------+\n");
    printf("|      Obrigado por utilizar nossos servicos!|\n");
    printf("|      CEO:: Daniel Volcaro                  |\n");
    printf("+--------------------------------------------+\n");
    
	
	
	return 0;
}
