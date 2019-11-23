main: main.o push.o pop.o display.o
	gcc -o main main.o push.o pop.o display.o
main.o: main.c 
	gcc -o main.o -c main.c
push.o: push.c 
	gcc -o push.o -c push.c
pop.o: pop.c 
	gcc -o pop.o -c pop.c
display.o: display.c
	gcc -o display.o -c display.c