#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()
#include "Q4.h"

int tam_arq_texto(char *nome_arquivo)
{
	int i = 0;
	int fp;
	char texto[300];
	char c;
	
	fp = open(nome_arquivo, O_RDWR | O_CREAT, S_IRWXU);
	if(fp==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}

	
	while(read(fp, &c, 1) != 0)
	{
		texto[i] = c;
		i++; 
	}
	return i;
}
