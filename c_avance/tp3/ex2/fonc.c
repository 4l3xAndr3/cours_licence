#include "fonc.h"
#include <stdio.h>


void afficher_vecteur(const struct vecteur * vec){
	printf("{%lf",vec->composant[0]);
	for (int i =1; i < vec->nbcomposant; ++i)
	{
		printf(",%lf",vec->composant[i] );
	}
	printf("} \n");
}


void affecter_vecteur(struct vecteur * vec1,const struct vecteur * vec2){
	for (int i = 0; i < vec2->nbcomposant; ++i)
	{
		vec1->composant[i]=vec2->composant[i];
	}
}