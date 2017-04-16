#include "Q5.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome_arquivo[] = "tamanho.txt";
	char conteudo[300];
	le_arq_texto(nome_arquivo, conteudo);
	printf("O arquivo tamanho.txt está escrito\n%s", conteudo);
	return 0;

}
