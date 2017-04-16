#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()

int main(int argc, const char * argv[])
{
	int fp;
	char nome[100];
	char idade[100];
	int i=0;
	
	fp = open("Q2.txt", O_RDWR | O_CREAT, S_IRWXU);
	if(fp==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}

	printf("Digite seu nome:");
	gets(nome);
	printf("Digite sua idade:");
	gets(idade);
	write(fp, "Nome: ",6);
	printf("Cadastro Realizado\n");

	for(i = 0; nome[i]; i++)
	{ 
		write(fp, &nome[i], 1);
	}
	
	write(fp, "\n",1);
	write(fp, "Idade: ",7);

	for(i = 0; idade[i]; i++)
	{ 
		write(fp, &idade[i], 1);
	}

	write(fp, "\n",1);

	close(fp);

	return 0;
}
