#include <stdio.h>
#include "read.h"
#include <sys/stat.h>

int main(int argc, char* argv[])
{
	struct stat statRes;
	#ifdef _WIN32
    /*Code was originally written on MacOS, unix based system.
     Therefore there might be some problems in Windows OS */
    printf("Twoj system nie jest obecnie wspierany\n");
	#endif
	if(argc==1)
	{
		printf("Nie podano pliku do odczytu\n");
		return -1;
	}
	int i=1;
	for(;i<argc;i++)
		{
			if(stat(argv[i], &statRes) < 0)
				return 1;
			mode_t bits = statRes.st_mode;
			if((bits & S_IRUSR) == 0)
			{
				printf("Nie masz uprawnien do tego pliku\n");
    			return 2;
			}
			printf("Plik: %d\n",i);
			read(argv[i]);
		}
	return 0;

}
