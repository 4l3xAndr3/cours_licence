/* programme de recherche auto-adaptative */
// question 1

#include <stdio.h>
#include <stdlib.h>
#define N 15

typedef int MonTableau[N];

MonTableau elemA, elemB, elemC, cpt;


/*--------------------------------------------------------------------------
  Utilitaire de visualisation de tableau
  --------------------------------------------------------------------------*/

void affichetab(MonTableau t) {
  for (int i = 0; i < N; ++i)
  {
    printf("%d ",t[i] );
  }
}


/*--------------------------------------------------------------------------
  Initialisation des trois tableaux elemA, elemB, elemC et cpt
  --------------------------------------------------------------------------*/

void init_elem(void) {

 for (int i = 0; i < N; ++i)
 {
   elemA[i]=i;
   elemB[i]=i;
   elemC[i]=i;
   cpt[i]=0;
 }
}


/*--------------------------------------------------------------------------
  Recherche d'elements dans le tableau elemA
  --------------------------------------------------------------------------*/

int recherche_A(int cle) {
  int i=0;
  while((i<N) && elemA[i]!=cle){
    i++;
    }
  if (i>0 && i<N)
  {
    elemA[i]=elemA[i-1];
    elemA[i-1]=cle;
  }
  
  return (i<N);
}


/*--------------------------------------------------------------------------
  Recherche d'elements dans le tableau elemB
  --------------------------------------------------------------------------*/

int recherche_B(int cle) {
  int i;
  while((i<N) && elemB[i]!=cle){
    i++;
    }
  if (i>0 && i<N)
  {
    for (int j=i; j >0 ; j--){
      elemB[j]=elemB[j-1];
    }
    elemB[0]=cle;
  }
  return (i<N);
}


/*--------------------------------------------------------------------------
  Recherche d'elements dans le tableau elemC
  --------------------------------------------------------------------------*/

int recherche_C(int cle) {
    int i=0;
  while((i<N) && elemC[i]!=cle){
    i++;
    }
  if (i<N){
    cpt[i]++;
    int cptcle =cpt[i];
    while((i>0)&&(cpt >cpt[i-1])){
      cpt[i] = cpt[i-1];
      elemC[i]=elemC[i-1];
      i--;
    }
    cpt[i]=cptcle;
    elemC[i]=cle;
  }
  return (i<N);
}


/*--------------------------------------------------------------------------
  Corps du programme
  --------------------------------------------------------------------------*/

int main(void) {
  int cle, temp;

  init_elem(); 
  printf("\nCle a rechercher (-1 pour arreter) ? ");
  scanf("%d", &cle);
  while (cle != -1) {
        temp = recherche_A(cle);
        temp = recherche_B(cle);
        temp = recherche_C(cle);
        printf("\nElem-a :"); affichetab(elemA);
        printf("\nElem-b :"); affichetab(elemB);
        printf("\nlem-c :"); affichetab(elemC);
        printf("\nCpt    :"); affichetab(cpt);
        printf("\nCle a rechercher (-1 pour arreter) ? ");
        scanf("%d", &cle);
  }   
  
  return 0;
}
 
