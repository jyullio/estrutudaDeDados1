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
	 *	o % 100 � o limite m�ximo de n�meros aleat�rios que ser�o gerados, n�o a quantidade, mas a numera��o m�xima que ser� encontrada.
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
