#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[45];
    int idade;
    char sexo;
};

int main ()
{
    struct aluno lista_de_alunos[2];

    system("clear");

    for ( int i = 0 ; i < 2 ; i++ )
    {
        printf("digite o nome......: ")   ;   scanf("%s", lista_de_alunos[i].nome);
        printf("digite a idade.....: ")   ;   scanf("\n%d", &lista_de_alunos[i].idade);

        while(1)
        {
            printf("digite o sexo......: ")    ;    scanf("\n%c" , &lista_de_alunos[i].sexo);

            if (    lista_de_alunos[i].sexo == 'f' ||
                    lista_de_alunos[i].sexo == 'F' ||
                    lista_de_alunos[i].sexo == 'm' ||
                    lista_de_alunos[i].sexo == 'M' )
            {
                break;
            }
            printf("\nDigite f ou F ou m ou M!\n\n");
        }
    }

    system("clear");

    for ( int i = 0 ; i < 2 ; i++ )
    {
        printf("O nome do aluno e.....: %s"   , lista_de_alunos[i].nome);
        printf("\nA idade do aluno e....: %d" , lista_de_alunos[i].idade);
        printf("\nO sexo e..............: %c" , lista_de_alunos[i].sexo);
        printf("\n \n");
    }
}

/*        do
        {
            printf("ndigite o sexo......: ")    ;    scanf("\n%c" , &lista_de_alunos[i].sexo);
        }
        while ( lista_de_alunos[i].sexo != 'f' &&
                lista_de_alunos[i].sexo != 'F' &&
                lista_de_alunos[i].sexo != 'm' &&
                lista_de_alunos[i].sexo != 'M' );
    }
*/