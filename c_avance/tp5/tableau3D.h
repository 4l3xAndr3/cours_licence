/************************************************************************
  Nom du fichier : tableau3D.h
=============================================================
  Description : contient les declarations des fonctions 
		du TP5
=============================================================
  Auteur : V. Ribaud, S. Rubini
=============================================================
  Date derniere modification : 12/10/2020
  Version : 2 (SR)
************************************************************/
#ifndef _TABLEAU3D_H_
#define _TABLEAU3D_H_

// a modifier en fonction de la question 
// Le symbole QUESTION valide la code pour le
//  test de la question correspondante     

#define QUESTION 2L


/* ---------------------------------------------------------- */

struct pixel{
	enum{noir_blanc,couleur}type;
	union{
		int n_b;
		struct{
			char r,g,b;
		}couleur;
	}valeur;
};
typedef struct pixel s_pixel;  /* en attendant votre definition */

/* ---------------------------------------------------------- */

int ***allouerTableauInt(int dim1, int dim2, int dim3);
s_pixel ***allouerTableauPixels(int dim1, int dim2, int dim3);
void afficherTableauPixels(const s_pixel ***t, int dim1, int dim2, int dim3);
void initialiserPixelNB(s_pixel ***t, int dim1, int dim2, int dim3);


void ****allouerTableau(int dim1, int dim2, int dim3);
void ajouterTableau(void ****t1, const void ****t2, const void ****t3, 
 		   int dim1, int dim2, int dim3, 
		   void (*ajouter)(void **, const void *, const void *));
void initialiserTableau(void ****t1,  
 		   int dim1, int dim2, int dim3, 
		   void * (*saisir)(void));

#endif /* _TABLEAU3D_H_ */
