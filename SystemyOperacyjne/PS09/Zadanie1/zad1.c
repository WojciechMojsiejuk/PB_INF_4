/*
Napisz program w którym funkcja main tworzy N wątków, po czym oczekuje na ich zakończenie.
Każdy wątek powinien w pętli inkrementować ITER razy globalną zmienną counter.
Parametry N oraz ITER powinny być przekazane jako argumenty programu (funkcji main).
Po zakończeniu wszystkich wątków funkcja main powinna wyświetlić ostateczną wartość zmiennej counter.
Przetestuj działanie programu z różnymi parametrami startowymi oraz z różnymi stopniami optymalizacji kompilatora.
*/
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
int counter;
int ITER;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
void* function(void *arg)
{

    for(int i=0;i<ITER;i++)
    {
        pthread_mutex_lock(&mutex1);
        ++counter;
        pthread_mutex_unlock(&mutex1);

    }
    return 0;
}
int main(int argc, char *argv[])
{
    if(argc==3)
    {
        int N = atoi(argv[1]);
        printf("%d\n",N);
        ITER = atoi(argv[2]);
        printf("%d\n",ITER);
        pthread_t  *id_array;
        id_array = (pthread_t*)malloc(sizeof(pthread_t)*N);
        for(long j=0;j<N;j++)
        {
          pthread_create (&id_array[j], NULL, &function,(void*)j);
        }
        for(long k=0;k<N;k++)
        {
            pthread_join(id_array[k], NULL);
        }
        printf("\n\n %d \n\n", counter);
        exit(EXIT_SUCCESS);
    }
    else
    {
        fprintf(stderr, "Function main needs two parameters: number_of_threads number_of_iterations \n");
        return -1;
    }

}
