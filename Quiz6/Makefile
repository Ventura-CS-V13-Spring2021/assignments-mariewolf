CC=g++
CFLAGS=-I.
DEPS = IntegerArray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: q-1.o IntegerArray.o 
	$(CC) -o q-1 q-1.o IntegerArray.o 
clean:
	bin/rm -rf *.o a.out 