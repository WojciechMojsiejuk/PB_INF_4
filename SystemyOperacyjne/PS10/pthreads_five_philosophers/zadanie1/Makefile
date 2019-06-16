CFLAGS = -Wall --std=c99
OBJ= main.o

sleepinghairdresser1: $(OBJ)
	gcc $(OBJ) -pthread -o fivephilosophers1 $(CFLAGS)

.PHONY : clean
clean:
	rm *.o fivephilosophers1
