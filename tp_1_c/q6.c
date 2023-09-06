#include <stdio.h>
int main()
{
	int nb,factorio=1,i;
	
	printf("valeur");
	scanf("%d", & nb);
	for (i = 1; i <= nb; i++)
	{
		factorio=factorio*i;
	}

	printf("le factorielle de %d est %d \n", nb,factorio );

}