#include <stdio.h>
#include "read.h"
#include <sys/stat.h>

int main(int argc, char* argv[])
{
	#ifdef _WIN32
    printf("Twoj system nie jest obecnie wspierany\n");
	#endif
	if(argc==1)
	{
		printf("Nie podano pliku do odczytu\n");
		return -1;
	}
	int i=1;
	FILE* plik;
	for(;i<argc;i++)
		{
			if((plik = fopen(argv[i], "r")) == NULL)
			{
				perror(argv[i]);
				return 1;
			}
			else
			{
				printf("Plik: %d\n",i);
				read(plik);
			}
			
		}
	return 0;

}
