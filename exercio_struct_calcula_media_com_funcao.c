#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_DA_LISTA 2

struct ficha_de_cadastro
{
	int idade , quantidadeDeFilhos ;
	char sexo ;
	float salario ;
};


float calcula_media(struct ficha_de_cadastro pesquisa[])
{
	int i ;
	
	float somaDosSalarios = 0 ;
	
	for (i = 0 ; i < TAMANHO_DA_LISTA ; i++)
	{
		somaDosSalarios += pesquisa[i].salario;
	}
	
	return somaDosSalarios / TAMANHO_DA_LISTA;
	
}

int main()
{
	int i ;
	
	struct ficha_de_cadastro pesquisa[TAMANHO_DA_LISTA];
	
	for (i = 0 ; i < TAMANHO_DA_LISTA ; i++)
	{
		printf ("Informe idade: ")  					;   scanf("%i" , &pesquisa[i].idade);
		printf ("Informe quantidade de filhos: ")   	;   scanf("%i" , &pesquisa[i].quantidadeDeFilhos);
		printf ("Informe seu sexo \"M\" ou \"F\": ")   	;   scanf("\n%c" , &pesquisa[i].sexo);
		printf ("Informe valor do salario: ")  			;   scanf("%f" , &pesquisa[i].salario);
	}
	
	printf(".2f" , calcula_media(pesquisa));
}

























/*
	int i , quantidadeDeAlunos ; 
	float somaDasNotas = 0 , *vetorDeNotas ;
	
	
			
	printf (""
			"*************************************	\n"
			"*   Calculadora de media de notas   *	\n"
			"*************************************	\n"
			"\n"
			"Informe a quantidade de alunos:		\n"
			">>> ");   
	
	scanf ("%d" , &quantidadeDeAlunos);
	
	vetorDeNotas = (float *)malloc(sizeof(float) * quantidadeDeAlunos);
	

	for (i = 0 ; i < quantidadeDeAlunos ; i++)
	{
		printf("Digite a nota: ")   ;   scanf("%f" , &vetorDeNotas[i]);
	}


	for (i = 0 ; i < quantidadeDeAlunos ; i++)
	{
		somaDasNotas += vetorDeNotas[i];
	}
	
	printf	( "\n"
			  "*************************************	\n"
		      "*  A media da turma foi: %5.2f \n" , somaDasNotas / quantidadeDeAlunos);
	
	printf("*************************************	\n");
	
	system ("pause");
	
	return 0;
}
*/
