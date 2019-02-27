#include <stdio.h>
#include "read.h"
int read(char *plik[])
{
	FILE *text = fopen(plik, "r");
	if(!text)
	{
		perror(plik);
        fprintf(stderr,"W podanym katalogu nie znajduje sie plik o takiej nazwie\n");
        return 1;
	}
	int c=0;
	while ((c = getc(text)) != EOF)
        putchar(c);
    printf("\n");
    fclose(text);
}