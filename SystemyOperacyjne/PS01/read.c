#include <stdio.h>
#include "read.h"
void read(FILE* text)
{
	int c=0;
	while ((c = getc(text)) != EOF)
        putchar(c);
    printf("\n");
    fclose(text);
}