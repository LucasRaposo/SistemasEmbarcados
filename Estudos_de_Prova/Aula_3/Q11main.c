//Argumentos

#include <stdio.h>
#include "Q11.h"
int main(int argc, char **argv)
{
	int i;
	int j;
	int vetor[argc];
	int total = 0;

	for (i=0; i<argc; i++)
	{
		vetor[i] = Num_Caracs(argv[i]);
	}

	for (j=0; j<argc; j++)
	{
		total = total + vetor[j];
	}

	printf ("Total de caracteres de entrada: %d\n",total );

}
