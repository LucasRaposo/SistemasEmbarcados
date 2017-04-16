#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()
#include "Q5.h"

int main()
{
	char nome_arquivo[] = "tamanho.txt";
	char conteudo[300];
	le_arq_texto(nome_arquivo, conteudo);
	printf("O arquivo tamanho.txt está escrito:\n%s", conteudo);
	return 0;

}
