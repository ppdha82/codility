#CROSS_COMPILE = powerpc-fsl-linux-
CC		= $(CROSS_COMPILE)gcc
CFLAGS=-I.

OBJS = BinaryGap.o
%o: %c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


main : main.c $(OBJS)
	$(CC) -o main $^


.PHONY : all
all : main

.PHONY : clean
clean :
	rm -f *.o main
