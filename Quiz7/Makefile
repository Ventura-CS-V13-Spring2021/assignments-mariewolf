CC=g++
CFLAGS=-I.
DEPS = IntegerArray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: q-1.o coordinate.o rectangle.o
	$(CC) -o q-1 q-1.o coordinate.o rectangle.o
clean:
	bin/rm -rf *.o a.out 