#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, const char *argv[])
{
	int a;
	int i= 1;

	pid_t child_pid[argc];		//Cria o processo filho chamado Child_pid (Poderia ser qualquer nome) mas como vetor de vários arg
	
	while (i <= argc) 
	{
		child_pid[i] = fork();	//Separa na quantidade de processos que tem argc
	
		if (child_pid[i] ==0)
		{
			char *lista[] = {NULL,NULL};
			lista[0] = argv[i];	//Pega o fator argv da vez (valor de i) para utilizar o execvp
			execvp(lista[0], lista);
		}

		else
		{
			sleep(1);	//Sincronizar os processos
			i++;
		}

	}

	 
	return 0;


}
