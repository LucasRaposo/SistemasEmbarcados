#include <stdio.h>

void main(void)
{
	FILE *fp;
	char Nome_Arquivo[] = "ola_mundo.txt";
	fp = fopen(Nome_Arquivo,"w");
	
	if (fp == NULL)
	{	
		printf("Esse arquivo não pode ser aberto\n");
	}
	
	else
	{
		printf("Arquivo criado\n");
		fprintf(fp, "Olá Mundo\n");
	}

	fclose(fp);
}
