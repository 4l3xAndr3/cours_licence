#include <stdio.h>


int reverseTab(int tab[],int taille){
	int val;
	
	for (int i = 0; i < taille/2; ++i)
	{
		
		val=tab[i];
		tab[i]=tab[taille-i-1];
		tab[taille-i-1]=val;
	}
}



int main(){
	int tab[]={2,3,4,5};
	int taille=4;
	reverseTab(tab,taille);	
	for (int i = 0; i < taille; ++i)
	{
		printf("%d ",tab[i] );
	}
	printf("\n");
}