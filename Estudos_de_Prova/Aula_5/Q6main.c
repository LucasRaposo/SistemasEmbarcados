#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()
#include "Q6.h"

int main(int argc, char **argv)
{
	char conteudo[300];
	le_arq_texto(argv[1], conteudo);
	printf("\n%s", conteudo);
	return 0;

}
