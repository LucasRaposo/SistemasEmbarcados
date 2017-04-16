#include "Q5.h"
#include <stdio.h>
#include <stdlib.h>

void le_arq_texto(char *nome_arquivo, char *conteudo)
{
	FILE *fp;
	char c;
	int i=0;

	fp = fopen(nome_arquivo,"r");

	if (fp == NULL)
	{	
		printf("Esse arquivo não pode ser aberto\n");
	}

	printf("\nSeu Arquivo tamanho.txt foi aberto com sucesso\n");

	while ((c = getc(fp)) != EOF)
	{
		conteudo[i] = c;
		i++;
	} 

	fclose(fp);		


}
