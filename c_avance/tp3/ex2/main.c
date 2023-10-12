#include "fonc.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	struct vecteur vec;
	vec.nbcomposant=15;
	vec.composant=malloc(sizeof(double)*vec.nbcomposant);
	afficher_vecteur(&vec);
}