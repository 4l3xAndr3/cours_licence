#include <stdio.h>
int main()
{
	int francs=0,convertisseurF_E=6.55967;
	int euros=0;
	printf("francs : ");
	scanf("%d", &francs);
	euros = francs/convertisseurF_E;
	printf(" %d francs = %d euros \n", francs,euros );

}