#include "Q4.h"
#include <stdio.h>
#include <stdlib.h>

int tam_arq_texto(char *nome_arquivo)
{
	FILE *fp;
	char c;
	int j=0;

	fp = fopen(nome_arquivo,"r");

	if (fp == NULL)
	{	
		printf("Esse arquivo não pode ser aberto\n");
	}
	
	

		printf("\nSeu Arquivo tamanho.txt foi aberto com sucesso\n");


	while ((c = getc(fp)) != EOF)
	    j++;

	fclose(fp);
	return j;		

}
