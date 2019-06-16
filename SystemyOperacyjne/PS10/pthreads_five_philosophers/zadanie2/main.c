/*
2. Zmodyfikuj rozwiązanie zadania 1 przez wprowadzenie asymetrii.
Niech jeden z filozofów (np. o numerze zero) próbuje podnieść najpierw prawy,
a następnie lewy widelec. Czy przy takim rozwiązaniu może wystąpić blokada?
Czy może wystąpić zagłodzenie ?

Odp. Nie występuje blokada, może wystąpić zagłodzenie.
*/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t forks[5];
#define N 5

struct arg_struct {
    int position;
    const char* name;
};

void* function(void* philosophers_info)
{
    struct arg_struct* philosopher = (struct arg_struct*)philosophers_info;
    const char* philospher_name = (char*) philosopher->name;
	int n = (long) philosopher->position;
	while(1)
	{
		printf("%s is thinking\n",philospher_name);

        if(n==0)
        {
            pthread_mutex_lock(&forks[(n+1)%N]);
            pthread_mutex_lock(&forks[n]);
        }
        else
        {
            pthread_mutex_lock(&forks[n]);
    		pthread_mutex_lock(&forks[(n+1)%N]);

        }

		printf("%s is eating\n",philospher_name);

        if(n==0)
        {
            pthread_mutex_unlock(&forks[(n+1)%N]);
            pthread_mutex_unlock(&forks[n]);
        }
        else
        {
            pthread_mutex_unlock(&forks[n]);
    		pthread_mutex_unlock(&forks[(n+1)%N]);

        }

	}
}

int main(int argc, char* argv[])
{
	int i;
    const char *philosophers_names[] = {"Jean-Paul Sartre", "Albert Camus", "Michel Foucault", "Simone de Beauvoir", "Jacques Derrida"};
	pthread_t philosophers[5];
    struct arg_struct *philosophers_info = malloc(sizeof(struct arg_struct)*N);
	for (i=0;i<N;i++)
	{
		pthread_mutex_init(&forks[i], NULL);
	}

	for (i=0;i<N;i++)
	{
        philosophers_info[i].position = i;
        philosophers_info[i].name = philosophers_names[i];
		pthread_create(&philosophers[i], NULL, &function, (void*)&philosophers_info[i]);
	}

	for (i=0;i<N;i++)
	{
		pthread_join(philosophers[i],NULL);
	}

	for (i=0;i<N;i++)
	{
		pthread_mutex_destroy(&forks[i]);
	}
  exit(EXIT_SUCCESS);
}
