#include "Q4.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//FILE *fp;
	char nome_arquivo[] = "tamanho.txt";
	char texto[300];
	int i;

	//printf("Digite o que deseja ser gravado:");
	//fgets(texto, 299, stdin);
	//fp = fopen(nome_arquivo,"w");
	
	//if (fp == NULL)
	//{	
		printf("Esse arquivo não pode ser aberto\n");
	//}
	
	//else
	//{	

		printf("Seu Arquivo tamanho.txt foi criado com sucesso\n");
		//for (i=0; texto[i]; i++)
		//{
		//	putc(texto[i], fp);
		//}

		printf("O arquivo tamanho.txt tem o tamanho de %d caracteres\n", tam_arq_texto(nome_arquivo));
		//fclose(fp);
		
	//}

	return 0;


}
