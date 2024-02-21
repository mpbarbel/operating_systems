CC=gcc 
all: checker coordinator
checker: checker.c
	gcc -g  checker.c -o checker.o
coordinator: coordinator.c
	gcc -g  coordinator.c -o coordinator.o

clean: 
	rm -f *.o $(OUT_EXE) 