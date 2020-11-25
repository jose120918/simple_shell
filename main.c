#include "holberton.h"

#define PRMTSIZ 255
#define MAXARGS 63
#define EXITCMD "exit"

/**
 * main - Shell, función
 * Return: 0 Success, o pailas.
 */
int main(void)
{
	for (;;)
	{
		char input[PRMTSIZ + 1] = {0x0};
		char *ptr = input;
		char *args[MAXARGS + 1] = {NULL};
		int wstatus;
		int istty;

		istty = isatty(STDIN_FILENO);
		if (istty == 1)
			printf("%s ", getuid() == 0 ? "#" : "$");
		
		fgets(input, PRMTSIZ, stdin);

		if (*ptr == '\n')
			continue;

		for (unsigned int i = 0; i < sizeof(args) && *ptr; ptr++)
		{
			if (*ptr == ' ')
				continue;
			if (*ptr == '\n')
				break;
			for (args[i++] = ptr; *ptr && *ptr != ' ' && *ptr != '\n'; ptr++)
				;
			*ptr = '\0';
		}

		if (strcmp(EXITCMD, args[0]) == 0)
			return (0);

		signal(SIGINT, SIG_DFL);
		if (fork() == 0)
			exit(execvp(args[0], args));
		signal(SIGINT, SIG_IGN);

		wait(&wstatus);
	}
}
