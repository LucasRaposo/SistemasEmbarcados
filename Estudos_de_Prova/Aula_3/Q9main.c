#include "Q8.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i=0;

	printf (" Número de Argumentos: %d\n", argc);

	for(i=0; i<argc; i++)
	{

	printf(" Argumento %d: %s | Número de letras: %d\n",i,  argv[i], Num_Caracs(argv[i]));
	}



	return 0;
}
