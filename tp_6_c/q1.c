#include <stdio.h>
#include "ens.h"

int main(){
	ens_t e;
	ensNouv(&e);
	ensIns(&e,15);
	ensIns(&e,10);ensIns(&e,11);ensIns(&e,12);ensIns(&e,13);ensIns(&e,14);
	ensIns(&e,15);ensIns(&e,12);
	ensAff(&e);
	//printf("trouve a l'index: %d \n",ensTrouve(&e,13));
	printf("suprimer a l'index: %d \n",ensSuppr(&e,11));
	printf("nb suprimer: %d \n",ensSupprTous(&e,15));
	ensAff(&e);
	ensReset(&e);
}