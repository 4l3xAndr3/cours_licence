/* ----------------------------------------------
   Programme de test des fonctions du TP 5 PCA
   ----------------------------------------------
   24/10/2011	SR	creation
   12/10/2020	SR	message d'erreur, symbole QUESTION	
   12/10/2021	SR	extension du test question 1
   ----------------------------------------------
   Le symbole QUESTION dans tableau3D.h valide la code pour le
     test de la question correspondante
   ----------------------------------------------
*/

/* tableau3D.h pour avoir les declarations des fonctions utilisees */
#include <stdio.h>
#include <stdlib.h>
#include "tableau3D.h"

#if QUESTION>=5L
/* Definition de la fonction d'ajout des double's */
void ajouterDouble(void **v1, const void *v2, const void *v3) {
	/* A vous */
        /* Si le double resultat n'est pas alloue, il faut le faire */
	return;
}
#endif

void afficherDouble(const void *e) {
	/* A vous */
	return;
}

void * saisirDouble(void) {
	/* A vous */
	return NULL;
}

int main() {
#if QUESTION==1L
	int ***t;
	
	t=allouerTableauInt(3,4,5);
	if (t==NULL) 
		printf("Problème lors de l'allocation du tableau\n");
	t[0][0][0]=10;  // le premier
	t[1][1][1]=15;  // au milieu
	t[2][3][4]=20;  // le dernier
	if (t[0][0][0] + t[1][1][1] + t[2][3][4] != 45 )
		printf("Probleme avec le tableau de int\n");	
v
   	printf("Fin de test de la question 1\n");

#endif

#if QUESTION > 1L && QUESTION  <= 4L
	s_pixel ***t1, ***t2, ***t3;
	int d1=4, d2=3, d3=2;
	
	/* affichage des dimensions */
	printf("Dimension : %d,%d,%d\n", d1, d2, d3);
	
	/* Allocation des pixel's */
	if ((t1 = allouerTableauPixels(d1, d2, d3)) == NULL) {
		printf("alloueTableauPixels() n'a pas reussi a allouer le tableau t1\n");
		return 1;
	}
	
	if ((t2 = allouerTableauPixels(d1, d2, d3)) == NULL) {
		printf("alloueTableauPixels() n'a pas reussi a allouer le tableau t2\n");
		return 1;
	}
	
	if ((t3 = allouerTableauPixels(d1, d2, d3)) == NULL) {
		printf("alloueTableauPixels() n'a pas reussi a allouer le tableau t3\n");
		return 1;
	}
	
	/* Lecture et affichage des TRUC's 2 et 3 */
	initialiserPixelNB(t1, d1, d2, d3);
	/* un pixel en RGB */
	t1[0][0][0].valeur.couleur.r=10;
	t1[0][0][0].valeur.couleur.g=10;
	t1[0][0][0].valeur.couleur.b=10;
	t1[0][0][0].type=couleur;
	afficherTableauPixels((const s_pixel ***)t1, d1, d2, d3);

	initialiserPixelNB(t2, d1, d2, d3);
	afficherTableauPixels((const s_pixel ***)t2, d1, d2, d3);
	printf("Fin du test des questions 2 à 4 \n");
#endif	
#if QUESTION>=5L
	void ****t1, ****t2, ****t3;
	int d1=4, d2=3, d3=2;

	if ((t1 = allouerTableau(d1, d2, d3)) == NULL) {
		printf("alloueTableau n'a pas reussi a allouer le tableau t1\n");
		return 1;
	}
	
	if ((t2 = allouerTableau(d1, d2, d3)) == NULL) {
		printf("alloueTableau n'a pas reussi a allouer le tableau t2\n");
		return 1;
	}
	
	if ((t3 = allouerTableau(d1, d2, d3)) == NULL) {
		printf("alloueTableau n'a pas reussi a allouer le tableau t3\n");
		return 1;
	}
	initialiserTableau(t2, d1, d2, d3, &saisirDouble);	
	initialiserTableau(t3, d1, d2, d3, &saisirDouble);	
	afficherTableau(t2, d1, d2, d3, &afficherDouble);
	afficherTableau(t3, d1, d2, d3, &afficherDouble);
	/* Ajout et affichage des lignes du resultat */
	ajouterTableau(t1, (const void ****)t2, (const void ****)t3, 
                       d1, d2, d3, &ajouterDouble);
	afficherTableau(t1, d1, d2, d3, &afficherDouble);
	printf("Fin du test des questions 5 et suivantes \n");

#endif
}
	
