#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>































/////////// Exercício 03: Média Escolar //////


int main (){
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	char aluno[20];
	float nota1, nota2, nota3, media;
	
	
	printf("Insira seu nome: ");
	scanf("%s", aluno);
	
	printf("Digite a 1 nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a 2 nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a 3 nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.0;
	
	if (media >= 70.0 && media <= 100){
		
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("Aluno Aprovado!\n");
	
	}else if ( media >= 40.0 && media <= 60.9){
		
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		printf("Aluno de Recuperacao!");
	
	}else{
		
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("Aluno Reprovado!\n");
	
	}
	 
		

	
	return 0;
	
	
}
