CC=gcc
CFLAGS=-Wall 


all : second_task
.PHONY : all

second_task : first.o
	$(CC) $(CFLAGS) -o second_task first.o

first.o : occurences.c 
	$(CC) $(CFLAGS) -c -o first.o occurences.c
	
debug:clean occurences.c
	$(CC) $(CFLAGS) -g -o test occurences.c
	gdb -tui  test
	
	
.PHONY: clean
clean: 
	rm -rf *.o 