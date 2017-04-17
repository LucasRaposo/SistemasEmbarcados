#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main ()
{
	pid_t child_pid;
	printf ("Este é o processo principal, o pid dele é %d\n", (int) getpid ());
	child_pid = fork ();
	if (child_pid != 0) 
	{
		printf ("Este é o processo Pai, o pid dele é %d\n", (int)
		getpid());
		child_pid = fork ();
		if (child_pid == 0) 
		{
			printf ("Este é o processo Filho2, o pid dele é %d\n", (int)
			getpid());

			child_pid = fork ();
			if (child_pid == 0) 
			{
				printf ("Este é o processo Filho3, o pid dele é %d\n", (int)
				getpid());
			}

		}

	}

	else
	printf ("Este é o processo Filho, o pid dele é %d\n", (int)
	getpid());
	return 0;
}
