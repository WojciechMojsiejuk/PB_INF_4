/*
Napisz program w którym zadeklarowano zmienną globalną counter.
Funkcja main uruchamia dwa wątki, po czym czeka na zakończenie dowolnego z nich.
Wątek pierwszy w nieskończonej pętli wyświetla wartość zmiennej counter.
Wątek drugi w nieskończonej pętli inkrementuje tę zmienną.
Dodatkowo skompiluj program z opcją -O3.
Opcja ta włącza optymalizacje kompilatora.
*/

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

int counter = 0;

void *function1()
{
    for(;;)
    {
      printf("Counter: %d\n", counter);
      printf("THREAD1\n");
    }
}

void *function2()
{
    for(;;)
    {
      printf("Incrementacja\n");
      counter++;
      printf("THREAD2\n");
    }
}

int main()
{
  pthread_t thread1, thread2;
  int rc1, rc2;
  pthread_create (&thread1, NULL, &function1, NULL);
  pthread_create (&thread2, NULL, &function2, NULL);
  pthread_join(thread1,NULL);
  pthread_join(thread2,NULL);
  exit(EXIT_SUCCESS);

}

/*
Jak wytłumaczyć zmianę zachowania programu? Jak temu zaradzić?
Odpowiedz:
*/
