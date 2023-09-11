#include <stdio.h>

int sommepositive(int *ptrsomme){
	int val=0,nblu=0;

	scanf("%d", &val);
	while(val != 0){

		*ptrsomme += val;
		nblu++;

		scanf("%d", &val);
	}
	return nblu;	
}


int main(){
	int result=0,nblu=0;

	nblu=sommepositive(&result);
	printf("la somme est de %d avec %d repetition \n",result,nblu);
}