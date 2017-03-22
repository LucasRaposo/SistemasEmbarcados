#include <stdio.h>

int main()
{
	char nome[100];
	char idade[3];

	printf("Digite o seu nome:");
	fgets(nome, 100, stdin);
	printf("Digite sua idade:");
	fgets(idade, 100, stdin);

	FILE *fp;
	char Nome_Arquivo[] = "cadastro.txt";
	fp = fopen(Nome_Arquivo,"w");
	
	if (fp == NULL)
	{	
		printf("Esse arquivo não pode ser aberto\n");
	}
	
	else
	{
		printf("Arquivo Cadastro.txt criado\n");
		fprintf(fp, "Nome: %s\n", nome);
		fprintf(fp, "Idade: %s anos\n", idade);
		
	}

	fclose(fp);
	return 0;
}
