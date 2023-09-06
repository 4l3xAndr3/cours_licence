#include <stdio.h>
int main()
{
	int val=0,i=0,somme=0;
	scanf("%d", &val);
	while(val>0){
		somme=somme+val;
		i++;
		scanf("%d", &val);
	}
	printf("la somme est de : %d avec %d repetition \n", somme, i);
}