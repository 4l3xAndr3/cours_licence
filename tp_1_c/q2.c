#include <stdio.h>

#define MAXI 10
int main()
{
	int val=0,nb=0;
	int i;
	for(i=1;i<MAXI;i++){
		scanf("%d",&nb);
		val=val+nb;
	}
	printf("somme : %d \n",val );
}