#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "read.h"

void readFile(int plik)
{
    int i;
    unsigned char buffer[32];
    size_t bytes_read;
    do
    {
        bytes_read = read(plik, buffer, sizeof(buffer));
        for (i = 0; i < bytes_read; ++i) putchar(buffer[i]);
    }
    while(bytes_read == sizeof (buffer));
    bytes_read=0;
    return;
}