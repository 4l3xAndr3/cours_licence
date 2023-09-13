#include "point.h"
#include "ville_t.h"
#include <stdio.h>
#include <string.h>

ville_t newVille(char nom[],int x,int y){
	ville_t v;
	
	strcpy(v.nom,nom);
	v.coords = newP(x,y);

	return v;
}



void afficheville(ville_t *v){
	printf("%s : (%d ; %d)\n",v->nom,v->coords.x,v->coords.y);
}