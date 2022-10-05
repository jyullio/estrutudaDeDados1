#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int nDigitado , i , *vetor ;
	
	printf ("Quantidade de numeros:\t")   ;   scanf ("%d" , &nDigitado);

	vetor = (int *)malloc(sizeof(int) * nDigitado);
	
	/*
	 *
	 *	o % 100 é o limite máximo de números aleatórios que serão gerados, não a quantidade, mas a numeração máxima que será encontrada.
	 *
	 */
	
	for (i = 0 ; i < nDigitado ; i++)
	{
		vetor[i] = (rand() % 100) + 1; 
	}

	printf("\nVetor:\t") ;

	for (i = 0 ; i < nDigitado ; i++)
	{
		printf(" %d " , vetor[i]);
	}

	printf ("\nPares:\t");
		for (i = 0 ; i < nDigitado ; i++)
		{
			if (vetor[i] % 2 == 0)
			{
				printf(" %d " , vetor[i]);
			}
				
		}
	
	printf ("\n\n\n\n\n\n\n");
	
	system ("pause");
	
	return 0;
}
