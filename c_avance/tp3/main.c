#include "fonc.h"
#include <stdio.h>

int main(){
	struct vecteur vec1 ={1,5};
	struct vecteur vec2 ={1,5};

	printf("norme : %lf\n",norme(vec1));
	printf("produit : {%lf,%lf}\n",produit(2.5,vec1));
	printf("projectionX : {%lf,%lf}\n",projectionX(vec1));
	printf("addition : {%lf,%lf}\n",addition(vec1,vec2));
	printf("produitScalaire : %lf\n",produitScalaire(vec1,vec2));
}