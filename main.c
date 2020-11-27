#include "shell.h"

#define PRMTSIZ 255
#define MAXARGS 63
#define EXITCMD "exit"

/**
 * main -  Función principal
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (;;)
	{
		int wstatus;
		unsigned int i = 0;
		char input[PRMTSIZ + 1] = {0x0};
		char *args[MAXARGS + 1] = {NULL};
		char *ptr = input;
		char istty;

		istty = isatty(STDIN_FILENO);
		if (istty == 1)
			printf("%s ", getuid() == 0 ? "#" : "$");
		fgets(input, PRMTSIZ, stdin);

		if (*ptr == '\n')
			continue;

		for (; i < sizeof(args) && *ptr; ptr++)
		{
			if (*ptr == ' ')
				continue;
			if (*ptr == '\n')
				break;
			for (args[i++] = ptr; *ptr && *ptr != ' ' && *ptr != '\n'; ptr++)
				;
			*ptr = '\0';
		}
		if (_strcmp(EXITCMD, args[0]) == 0)
			return (0);

		signal(SIGINT, SIG_DFL);
		if (fork() == 0)
			exit(execvp(args[0], args));
		signal(SIGINT, SIG_IGN);

		wait(&wstatus);
}
