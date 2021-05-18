CC=g++
CFLAGS=-I.
DEPS = student.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: q-3.o student.o
	$(CC) -o q-3 q-3.o student.o
clean:
	bin/rm -rf *.o a.out 