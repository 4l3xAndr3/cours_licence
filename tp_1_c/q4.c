#include <stdio.h>
int main()
{
	int val=0,i=0,somme=0;
	int petiteValeur,grandeValeur;
	scanf("%d", &val);
	petiteValeur=val;
	grandeValeur=val;
	while(val>0){
		if (petiteValeur>val)
		{
			petiteValeur=val;
		}
		if (grandeValeur<val)
		{
			grandeValeur=val;
		}
		somme=somme+val;
		i++;
		scanf("%d", &val);
	}
	printf("la somme est de : %d avec %d repetition(plus grande valeur : %d ,plus petite valeur : %d) \n", somme, i,grandeValeur,petiteValeur);
}