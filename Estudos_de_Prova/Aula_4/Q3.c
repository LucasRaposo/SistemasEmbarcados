#include <stdio.h>


int main(int argc, char **argv)
{

	FILE *fp;
	char Nome_Arquivo[] = "cadastro2.txt";
	fp = fopen(Nome_Arquivo,"w");
	
	if (fp == NULL)
	{	
		printf("Esse arquivo não pode ser aberto\n");
	}
	
	else
	{	
		printf("Ola %s \n" , argv[1]);
		printf("Seu Arquivo Cadastro2.txt foi criado com sucesso\n");
		fprintf(fp, "Nome: %s\n", argv[1]);
		fprintf(fp, "Idade: %s anos\n", argv[2]);
	}

	fclose(fp);
	return 0;
}
