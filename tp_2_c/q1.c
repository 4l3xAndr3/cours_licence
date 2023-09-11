#include <stdio.h>

void aff_somme(){
	int nb1,nb2,somme;
	scanf("%d", &nb1);
	scanf("%d", &nb2);
	somme=nb1+nb2;
	printf("%d \n",somme);

}


int main()
{
	aff_somme();
}