/*
Napisz program w którym funkcja main tworzy 10 wątków,
po czym oczekuje na ich zakończenie. Każdy wątek powinien
wykonywać pętlę for, w której wielokrotnie (ale niekoniecznie co
każdą iterację) drukowany byłby napis: "Wątek i iteracja k”.
Każdy wątek powinien wybierać losowo liczbę iteracji pętli for
z przedziału [0-10000]. Po zakończeniu wszystkich wątków funkcja
main powinna wyświetlić łączną liczbę iteracji wykonaną przez wszystkie wątki.
Uwaga: zliczanie łącznej ilości iteracji powinno być wykonane przez parametry
zwrotne wątków (funkcje pthread_exit / pthread_join), nie przez zmienną globalną.
*/
#include <time.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>


void *function(void * watek)
{
    int *param;
    param = (int*) watek;
    int r = rand()%10+1;
    for(int i=0;i<r;i++)
    {
      printf("Wątek %d Iteracja %d\n", param, i);
    }
}

int main()
{
  srand(time(NULL));
  int i = 10;
  int *ret, count =0;
  int j=0;
  pthread_t  id_array[10];
  for(j=0;j<i;j++)
  {
    pthread_create (&id_array[j], NULL, &function,(void*)j);
  }
  for(int k=0;k<i;k++)
  {
    pthread_join(id_array[k],(void**)&ret);
    count += (int)ret;
  }
  printf("\n\n %d \n\n", count);
  exit(EXIT_SUCCESS);
}
//https://stackoverflow.com/questions/16986214/why-type-cast-a-void-pointer
