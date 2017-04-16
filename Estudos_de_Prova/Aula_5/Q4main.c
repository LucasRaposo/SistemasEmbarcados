#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()
#include "Q4.h"

int main()
{
	char nome_arquivo[] = "tamanho.txt";	
	printf("Seu arquivo tem %d caracteres\n", tam_arq_texto(nome_arquivo)); 
	return 0;


}
