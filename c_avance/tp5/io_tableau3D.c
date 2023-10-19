/************************************************************
  Nom du fichier : io_tableau3D.c
=============================================================
  Description : contient les fonctions  de lecture-ecriture du TP5
=============================================================
  Auteur : V. Ribaud, S. Rubini
=============================================================
  Date derniere modification : 22/10/2011
************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include "tableau3D.h"

#if QUESTION > 1 
void initialiserPixelNB(s_pixel ***t, int dim1, int dim2, int dim3) {
	int i,j,k;
	int intensite;

	/* Lire une valeur qui sera affectee a chaque element du tableau */
	printf("Entrez une valeur\n");
        scanf("%d", &intensite);

	for (i=0; i<dim1; i++)
		for (j=0; j<dim2; j++)
			for (k=0; k<dim3; k++) {
				t[i][j][k].type=noir_blanc;
				t[i][j][k].valeur.n_b = intensite;
			}
				
	return;
}

/* afficherPixels : version avec pointeurs uniquement */
void afficherTableauPixels(const s_pixel ***t, int dim1, int dim2, int dim3) {
	/* A vous */
}
#endif

void initialiserTableau(void ****t, int dim1, int dim2, int dim3,
                        void * (*saisir)(void)) {
	return;
}

void afficherTableau(const void ****t, int dim1, int dim2, int dim3,
			void (*afficher)(const void *)) {

	return;	

}

