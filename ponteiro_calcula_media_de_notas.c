#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
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
