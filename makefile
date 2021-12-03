cc = gcc
cflags = -c

bst:   bst.o
	$(cc) bst.c -o $@

clean :
	rm -f *.o
	rm -f bst
