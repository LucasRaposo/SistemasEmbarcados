#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int v_global = 0; // Variavel global para este exemplo
void Incrementa_Variavel_Global(pid_t id_atual)
{
	v_global++;
	printf("ID do processo que executou esta funcao = %d\n", id_atual);
	printf("v_global = %d\n", v_global);
}



int main ()
{
	pid_t child_pid;
	child_pid = fork ();
	if (child_pid != 0) 
	{
		printf ("Este é o processo Pai, o pid dele é %d\n", (int)getpid());
		child_pid = fork ();
		if (child_pid == 0) 
		{
			printf ("Este é o processo Filho2, o pid dele é %d\n", (int)getpid());
			Incrementa_Variavel_Global();

			child_pid = fork ();
			if (child_pid == 0) 
			{
				printf ("Este é o processo Filho3, o pid dele é %d\n", (int)
				getpid());
				Incrementa_Variavel_Global();
			}

		}

	}

	else
	printf ("Este é o processo Filho, o pid dele é %d\n", (int)getpid());
	Incrementa_Variavel_Global();
	return 0;
}
