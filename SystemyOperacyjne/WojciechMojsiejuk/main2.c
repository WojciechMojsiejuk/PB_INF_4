#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include "read.h"

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
			plik = open ("inputfile.txt", O_RDONLY);
			if (plik == -1) 
			{
 				/* The open failed.  Print an error message and exit.  */ 
 				fprintf (stderr, "error opening file: %s\n", strerror (errno)); 
  				exit (EXIT_FAILURE);
  			}
			else
			{
				printf("Plik: %d\n",i);
				read(plik);
			}
			
		}
	return 0; 
	
	 
	
} 