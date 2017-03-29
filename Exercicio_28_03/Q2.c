#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main (int argc, char **argv)
{
	
	int i;
	char comando[100];



	for(i = 1; argc; i++)
	{ 
	strcat(comando, "%s" ,argv[i]);

	}
	printf("%s" ,comando);

	//comando = system("%s", argv[i]);

	return 0;
}
