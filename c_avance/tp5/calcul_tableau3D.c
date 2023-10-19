/************************************************************************
  Nom du fichier : calcul_tableau3D.c
=============================================================
  Description : contient les fonctions a faire pour le TP5
=============================================================
  Auteur : V. Ribaud, S. Rubini
=============================================================
  Version : 2
************************************************************/
#include <stdio.h>
#include <malloc.h>

#include "tableau3D.h"

/* Alloue renvoie l'adresse du tableau si tout s'est bien passe, NULL sinon */
int ***allouerTableauInt(int dim1, int dim2, int dim3) {
	int ***t;
	t=(int ***)malloc(dim1*sizeof(int **));
	for (int i = 0; i < dim1; ++i){
		t[i]=(int **)malloc(dim2*sizeof(int *));
		for (int j = 0; j < dim2; ++j){
			t[i][j]=(int *)malloc(dim2*sizeof(int));
		}
	}
	return t;
}

s_pixel ***allouerTableauPixels(int dim1, int dim2, int dim3) {
	s_pixel ***t;
	t=(s_pixel ***)malloc(dim1*sizeof(s_pixel **));
	for (int i = 0; i < dim1; ++i){
		t[i]=(s_pixel **)malloc(dim2*sizeof(s_pixel *));
		for (int j = 0; j < dim2; ++j){
			t[i][j]=(s_pixel *)malloc(dim2*sizeof(s_pixel));
		}
	}
	return t;
}

void ****allouerTableau(int dim1, int dim2, int dim3) {
	/* A vous */
	return NULL;
}



/* AjouterTableau : version avec operateur d'indicage [] */
void ajouterTableau(void ****t1, const void ****t2, const void ****t3, 
	int dim1, int dim2, int dim3,
	void (*ajouter)(void **, const void *, const void *)){
	/* A vous */
	return;
}
