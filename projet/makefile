main: zpixel.o image.o main.o stack2_x86_64.o
	gcc -o main -W -Wall zpixel.o image.o main.o stack2_x86_64.o $(shell pkg-config --cflags --libs glib-2.0) -lm


main.o: main.c
	gcc -c -W -Wall main.c $(shell pkg-config --cflags --libs glib-2.0) -lm

zpixel.o: zpixel/zpixel.h zpixel/zpixel.c zpixel/arbre.c
	gcc -c -W -Wall zpixel/zpixel.c zpixel/arbre.c $(shell pkg-config --cflags --libs glib-2.0)

image.o: image/image.h image/image.c
	gcc -c -W -Wall image/image.c

clean:
	rm -f zpixel.o image.o main.o main
