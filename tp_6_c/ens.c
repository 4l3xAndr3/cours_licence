#include <stdio.h>
#include "ens.h"

void ensNouv(ens_t *e){
	e->nb = 0;
	e->donnees[MAXENS];
}

int ensIns(ens_t *e, int val){
	if (e->nb==MAXENS)	return 0;

	e->donnees[e->nb]=val;
	e->nb++;
	return 1;
}

int ensTrouve(ens_t *e, int val){
	for (int i = 0; i < e->nb; ++i)
	{
		if (val==e->donnees[i]) 
			return i;
	}
	return -1;
}

int ensSuppr(ens_t *e, int val){
	int i = ensTrouve(e,val);

	if (i!=-1){ 
		e->donnees[i]=e->donnees[e->nb-1];		
			e->nb--;
		return i;
	}
	return -1;
}

int ensSupprTous(ens_t *e, int val){
	int trouve=0,i=0;

	for (i; i < e->nb; ++i)
	{
		if (ensSuppr(e,val)!=-1)
			trouve++;	
		
	}

	if (trouve>0)
		return trouve;
}

void ensReset(ens_t *e){
	e->nb=0;
}



void ensAff(ens_t *e){
	printf("ens : ");
	for (int i = 0; i < e->nb; ++i)
	{
		printf("%d ",e->donnees[i]);
	}
	printf("\n");

}