#include "shell.h"

/**
 * _fgets -  All main function to execute the shell.
 * @my_string: a sve info.
 * @bytes: Cantidad de bytes
 * @fp: fpfile.
 * Return: Always 0 (Success)
 */
char _fgets(char *my_string[], int *bytes, FILE *fp)
{
	int c, i = 0;

	if (bytes <= 0)
		return my_string;

	while (i < bytes - 1 && ((c = getc(fp)) != EOF))
	{
		my_string[i++] = c;
		if (c == '\n')
			break;
	}
	my_string[i] = '\0';

	if (i > 0) 
	{
		return my_string;
	} 
	else 
	{
		return NULL;
	}
}
