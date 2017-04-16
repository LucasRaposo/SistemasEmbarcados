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
	
	
	fp = open("Q3.txt", O_RDWR | O_CREAT, S_IRWXU);
	if(fp==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}

	write(fp, "Nome: ",6);		
	for(i = 0; argv[1][i]; i++)
	{ 
		write(fp, &argv[1][i], 1);
	}
	write(fp, "\n",1);
	
	write(fp, "Idade: ",7);
	for(i = 0; argv[2][i]; i++)
	{ 
		
		write(fp, &argv[2][i], 1);
	}
	write(fp, "\n",1);

	close(fp);

	return 0;
}
