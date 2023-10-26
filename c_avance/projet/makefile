test:zpixel.o test_Zpixel.o
	gcc -o  test -W -Wall zpixel.o test_Zpixel.o -lm

test_Zpixel.o:zpixel/test_Zpixel.c 
	gcc -c -W -Wall zpixel/test_Zpixel.c 


zpixel.o:zpixel/zpixel.h zpixel/zpixel.c
	gcc -c -W -Wall zpixel/zpixel.c 