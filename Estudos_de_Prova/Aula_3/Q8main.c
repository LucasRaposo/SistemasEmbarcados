#include "Q8.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char frase[100];
	printf("Digite a frase:");
	gets (frase);
	printf("\nA frase escolhida tem: %d\n ", Num_Caracs(frase));
	return 0;


}
