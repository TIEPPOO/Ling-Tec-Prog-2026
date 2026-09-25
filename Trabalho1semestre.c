#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/////// CONTRIBUICOES ///////
/// FIZEMOS O TRABALHO NO DEV C++, A GENTE FEZ EM CALL, CADA UM FEZ SUA PARTE E JUNTMOS EM UM REPOSITORIO
// ENDERSON: STRUCT, VARIAVEIS, VALIDACAO DE CPF E PARTE GRAFICA
// DIELSON: SWITCH, VALORES DOS CALCULOS E VARIAVEIS
// RAUL: PARTE GRAFICA E REVISAO
// KEVYN: REVISAO


struct Conta { 
    int idapessoa;
    char nome[20];
    float saldocliente;
    char aniversario[12];
};

int main(){
    
    /// VARIAVEL 1.O - CONTA ---------

    struct Conta c1 = {1, "Maria Silva", 3000.00, "09/02/2000"};
    struct Conta c2 = {2, "Jose Da Paz", 2000.00, "11/12/1989"};
    struct Conta c3 = {3, "Valdecir Fulano", 4000.00,"12/01/2004"};
    
    printf("ID: %d |Nome: %-15s |\n",c1.idapessoa, c1.nome);
    printf("ID: %d |Nome: %-15s |\n",c2.idapessoa, c2.nome);
    printf("ID: %d |Nome: %-15s |\n",c3.idapessoa, c3.nome);

    int buscaid;

    printf("Qual ID voce quer escolher? ");
    scanf("%d",&buscaid);

    char nome_selecionado[20];
    char data_nascimento[12];
    float saldo_atual = 0;

    if (buscaid == 1) {
        printf("|==============================================================|\n");
        printf("===========Bem vindo: %s=================\n", c1.nome);
        strcpy(nome_selecionado, c1.nome);
        strcpy(data_nascimento, c1.aniversario);
        saldo_atual = c1.saldocliente;
    }
    else if (buscaid == 2) {
        printf("|==============================================================|\n");
        printf("===========Bem vindo: %s=================\n", c2.nome);
        strcpy(nome_selecionado, c2.nome);
        strcpy(data_nascimento, c2.aniversario);
        saldo_atual = c2.saldocliente;
    }
    else if (buscaid == 3) {
        printf("|==============================================================|\n");
        printf("===========Bem vindo: %s=================\n", c3.nome);
        strcpy(nome_selecionado, c3.nome);
        strcpy(data_nascimento, c3.aniversario);
        saldo_atual = c3.saldocliente;
    }
    else {
        printf("Conta nao encontrada\n");
        return 0;
    }

    //VARIAVEL 1.1 - Verificador de CPF //////////

    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    
    printf("Digitei o seu CPF: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);
    
    if (d1 == d2 && d2 == d3 && d3 == d4 && d4 == d5 && 
        d5 == d6 && d6 == d7 && d7 == d8 && d8 == d9 && 
        d9 == d10 && d10 == d11) {
        printf("CPF invalido\n");
        return 0;
    }

    int multiplicacao = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + (d6 * 5) + (d7 * 4) + (d8 * 3) + (d9 * 2);
    int fracao = (multiplicacao * 10) % 11;
    
    if (fracao == 10){
        fracao = 0;
    }

    int multiplicacao2 = (d1 * 11) + (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + (d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (d10 * 2);
    int fracao2 = (multiplicacao2 * 10) % 11;
    
    char cpf_salvo[15];
    
    if (fracao2 == 10){
        fracao2 = 0;
    }
        
    if (d10 == fracao && d11 == fracao2){
        printf("CPF valido!!!\n");
        sprintf(cpf_salvo, "%d%d%d.%d%d%d.%d%d%d-%d%d", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
    } else {
        printf("CPF invalido");
        return 0;
    }

    int menu;

    /// VARIAVEL 1.2 - MENU ---------

    printf("Qual opcao voce quer escolher? \n");
    printf("1 - CONSULTAR SALDO NA CONTA\n");
    printf("2 - DEPOSITAR SALDO NA CONTA\n");
    printf("3 - RETIRAR SALDO NA CONTA\n");
    printf("4 - SIMULACAO DE PARCELAMENTO\n");
    
    scanf("%d", &menu);

    // Variaveis da simulacao
    float valor_divida, juros, parcela_divida;
    int parcela;

    switch (menu){

    /// VARIAVEL 1.3 - OPCOES ---------

    case 1:
        printf("+--------------------------------------------+| CONSULTAR SALDO NA CONTA |+--------------------------------------------+\n");
        
        printf("+--------------------------------------------+\n");
        printf("| Descricao:     Saldo Bancario              |\n");
        printf("+--------------------------------------------+\n");
        printf("| Nome: %-37.37s|\n" , nome_selecionado);
        printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
        printf("| CPF: %-38s|\n", cpf_salvo);
        printf("| Valor total:   R$: %-23.2f |\n", saldo_atual);
        printf("+--------------------------------------------+\n");
        break;

    case 2:
        printf("+--------------------------------------------+| DEPOSITAR SALDO NA CONTA |+--------------------------------------------+\n");
        
        float deposito;
        
        printf("Qual valor quer depositar? ");
        scanf("%f", &deposito);
        
        
        printf("+--------------------------------------------+\n");
        printf("| Descricao:     Deposito em  Conta          |\n");
        printf("| Descricao:     Emprestimo Pessoal          |\n");
        printf("| Nome: %-37.37s|\n" , nome_selecionado);
        printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
        printf("| CPF: %-38s|\n", cpf_salvo);
        printf("+--------------------------------------------+\n");
        printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + deposito);
        printf("+--------------------------------------------+\n");
        
        
        break;

    case 3:
        printf("+--------------------------------------------+| RETIRAR SALDO NA CONTA |+----------------------------------------------+\n");
        
		float deposito_negativo;
		
		printf("Qual valor quer retirar? ");
        scanf("%f", &deposito_negativo);
        
        
        printf("+--------------------------------------------+\n");
        printf("| Descricao:     Deposito em  Conta          |\n");
        printf("| Descricao:     Emprestimo Pessoal          |\n");
        printf("| Nome: %-37.37s|\n" , nome_selecionado);
        printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
        printf("| CPF: %-38s|\n", cpf_salvo);
        printf("+--------------------------------------------+\n");
        printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual - deposito_negativo);
        printf("+--------------------------------------------+\n");
		
		
		
		break;

    case 4:
        printf("+--------------------------------------------+| SIMULACAO DE EMPRESTIMO |+---------------------------------------------+\n");

        printf("\nInsira o valor a pagar: ");
        scanf("%f", &valor_divida);
        printf("\nInforme a quantidade de parcelas |1|2|3|4|5|6|7|8|9|10| ?: ");
        scanf("%d", &parcela);

        switch (parcela){

            case 1:
                juros = valor_divida;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado);
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 1);
                printf("| Juros ao mes:  0%%                          |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n", juros);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + juros);
                printf("+--------------------------------------------+\n");
                break;
                
            case 2:
                juros = valor_divida * 1.05;
                parcela_divida = juros / 2;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado);
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 2);
                printf("| Juros ao mes:  5%%                          |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n", parcela_divida);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + valor_divida);
                printf("+--------------------------------------------+\n");
                break;

            case 3:
                juros = valor_divida * 1.10;
                parcela_divida = juros / 3;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado);
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 3);
                printf("| Juros ao mes:  10%%                         |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + valor_divida);
                printf("+--------------------------------------------+\n");
                break;
                
            case 4:
                juros = valor_divida * 1.15;
                parcela_divida = juros / 4;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado);
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 4);
                printf("| Juros ao mes:  15%%                         |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + valor_divida);
                printf("+--------------------------------------------+\n");
                break;
                
            case 5:
                juros = valor_divida * 1.20;
                parcela_divida = juros / 5;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado);
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 5);
                printf("| Juros ao mes:  20%%                         |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + valor_divida);
                printf("+--------------------------------------------+\n");
                break;

            case 6:
                juros = valor_divida * 1.30;
                parcela_divida = juros / 6;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado);
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 6);
                printf("| Juros ao mes:  30%%                         |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + valor_divida);
                printf("+--------------------------------------------+\n");
                break;
                
            case 7:
                juros = valor_divida * 1.35;
                parcela_divida = juros / 7;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado); // Corrigido pprintf para printf
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 7);
                printf("| Juros ao mes:  35%%                         |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + valor_divida);
                printf("+--------------------------------------------+\n");
                break;
                
            case 8:
                juros = valor_divida * 1.40;
                parcela_divida = juros / 8;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado);
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 8);
                printf("| Juros ao mes:  40%%                         |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + valor_divida);
                printf("+--------------------------------------------+\n");
                break;  
                
            case 9:
                juros = valor_divida * 1.45;
                parcela_divida = juros / 9;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado);
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 9);
                printf("| Juros ao mes:  45%%                         |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + valor_divida);
                printf("+--------------------------------------------+\n");
                break;
                
            case 10:
                juros = valor_divida * 1.50;
                parcela_divida = juros / 10;
                printf("+--------------------------------------------+\n");
                printf("| Descricao:     Emprestimo Pessoal          |\n");
                printf("| Nome: %-37.37s|\n" , nome_selecionado);
                printf("| Data de Nascimento: %-23.23s|\n", data_nascimento);
                printf("| CPF: %-38s|\n", cpf_salvo);
                printf("| Valor total:   R$: %-23.2f |\n", juros);
                printf("| Qtd. parcelas: %-27d |\n", 10);
                printf("| Juros ao mes:  50%%                         |\n");
                printf("+--------------------------------------------+\n");
                printf("|Valor de cada parcela: R$: %-17.2f|\n",parcela_divida);
                printf("+--------------------------------------------+\n");
                printf("|Valor disponivel na conta: R$: %-13.2f|\n", saldo_atual + valor_divida);
                printf("+--------------------------------------------+\n");
                break;
                
            default:
                printf("\nOpcao Invalida!");
                break;
        }
        break;

    default:
        printf("\nOpcao Invalida!");
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









