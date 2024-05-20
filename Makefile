CC=gcc
CFLAGS=-I.

DEPS = node.h driver.h linkedlist.h lib.h
OBJ = main.o driver.o linkedlist.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

linkedlistprog: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
