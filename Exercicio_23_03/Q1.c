#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()

int main(int argc, const char * argv[])
{
	int fp;
	
	fp = open("Q1.txt", O_RDWR | O_CREAT, S_IRWXU);
	if(fp==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}

	printf("Arquivo Criado\n");
	write(fp, "Ola mundo", 10);
	write(fp,"\n", 1);
	close(fp);

	return 0;
}
