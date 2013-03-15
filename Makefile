test:test.o rc4.o
	gcc -o test test.o rc4.o
test.o:test.c rc4.h
	gcc -c test.c
rc4.o:rc4.c rc4.h
	gcc -c rc4.c
clean:
	rm *.o test
