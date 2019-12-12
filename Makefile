VPATH=src head
Maiev: main.o a.o
	gcc $^ -o $@ 
a.o: a.c
	gcc -c $<
Main.o: main.c a.h
	gcc -c $<
.PHONY:	clean
clean:
	rm *.o Maiev
