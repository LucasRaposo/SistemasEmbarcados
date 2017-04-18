#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>


int main() 
{
	int i=0;
	int pid, /* pid do processo filho */
	fd[2], /* descritores do pipe */
	estado; /* estado do processo filho */
	char mensagem[30];
	/* cria o pipe */
	if (pipe(fd) < 0)
	{ 
		printf("erro na criacao do pipe\n"); exit(1);} /* cria o processo */
		if ((pid = fork()) < 0)
		{ 
			printf("erro na criacao do processo\n"); exit(1);} /* codigo do filho */
			if (pid == 0)
			{
				if (read(fd[0], mensagem, 30) < 0) printf("erro na leitura\n");
	else
		printf("valor lido = %s\n", mensagem);
	exit(0); }

	/* codigo do pai */
	for (i=0; i>=10; i++)
	{
		strcpy(mensagem, "teste do envio no pipe");
		i++;
	}
	if (write(fd[1], mensagem, sizeof(mensagem)) < 0)
		printf("erro na escrita\n"); wait(&estado);
	exit(0);
}
