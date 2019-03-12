#include <stdio.h>
#include <stdlib.h>
#include "read.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[])
{
	#ifdef _WIN32
    fprintf(stderr,"Twoj system nie jest obecnie wspierany\n");
	#endif
  	if(argc==1)
	{
		fprintf(stderr,"Nie podano pliku do odczytu\n");
		return -1;
	}
	int i=1;
	int plik;
	for(;i<argc;i++)
		{
			plik = open (argv[i], O_RDONLY);
			if (plik == -1) 
			{
 				/* The open failed.  Print an error message and exit.  */ 
 				perror(argv[i]); 
  				exit (EXIT_FAILURE);
  			}
			else
			{
				printf("\nPlik: %d\n\n",i);
				readFile(plik);
				printf("\n");
				close(plik);
			}
			
		}
	return 0; 	
} 