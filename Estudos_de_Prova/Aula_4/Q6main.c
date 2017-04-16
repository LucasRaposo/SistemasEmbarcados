#include "Q6.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char conteudo[300];
	le_arq_texto(argv[1], conteudo);
	printf("\n%s", conteudo);
	return 0;

}
