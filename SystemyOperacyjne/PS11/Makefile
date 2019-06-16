CFLAGS = -Wall --std=c99
OBJ= main.o

main: $(OBJ)
	gcc $(OBJ) -pthread -o main $(CFLAGS)

.PHONY : clean
clean:
	rm *.o main
