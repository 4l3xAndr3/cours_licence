main:zpixel.o image.o main.o
	gcc -o  main -W -Wall zpixel.o image.o main.o -lm

main.o:main.c
	gcc -c -W -Wall main.c

zpixel.o:zpixel/zpixel.h zpixel/zpixel.c
	gcc -c -W -Wall zpixel/zpixel.c 

image.o:image/image.h image/image.c
	gcc -c -W -Wall image/image.c

clear:
	rm -f zpixel.o image.o main.o main