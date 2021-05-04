CC=g++
CFLAGS=-I.
DEPS = IntegerArray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: assignment6-1.o IntegerArray.o 
	$(CC) -o assignment6-1 assignment6-1.o IntegerArray.o 
clean:
	bin/rm -rf *.o a.out 