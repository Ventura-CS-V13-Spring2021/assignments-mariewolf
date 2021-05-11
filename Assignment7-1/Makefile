CC=g++
CFLAGS=-I.
DEPS = IntegerArray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: assignment7-1.o address.o DOB.o student.o
	$(CC) -o assignment7-1 assignment7-1.o address.o DOB.o student.o
clean:
	bin/rm -rf *.o a.out 