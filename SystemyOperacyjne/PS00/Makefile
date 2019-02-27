CFLAGS = -Wall --std=c99
OBJ= hello.o fun.o

hello: $(OBJ)
	gcc $(OBJ) -o hello $(CFLAGS)

.PHONY : clean
clean:
	rm *.o hello
