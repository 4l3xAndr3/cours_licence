#include <stdio.h>
#include <string.h>


int lecTab(int tab[],int taille){
	int val=0,i=0;
	while(taille>i){
		scanf("%d", &(tab[i]));
		i++;
		}
}


int main(){
	int tab[10],taille=10;

	lecTab(tab,taille);

	for (int i = 0; i < taille; ++i)
	{
		printf("%d ",tab[i] );
	}
	printf("\n");
}