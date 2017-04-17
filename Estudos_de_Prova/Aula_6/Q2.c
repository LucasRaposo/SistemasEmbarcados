#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int a;
	int i=0;

	for(i=1; i<argc; i++)
	{
		a = system(argv[i]);

	} 
	return 0;


}
