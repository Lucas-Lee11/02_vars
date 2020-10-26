all: hello.o
	gcc -o prgrm hello.o

hello.o: hello.c
	gcc -c hello.c

run: prgrm
	./prgrm
