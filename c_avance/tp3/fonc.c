#include <math.h>
#include "fonc.h"

double norme(struct vecteur vec){
	double result = 0;

	result =sqrt((vec.x*vec.x)+(vec.y*vec.y));

	return result;
}


struct vecteur produit(double lambda, struct vecteur vec){
	struct vecteur vec2;

	vec2.x=lambda*vec.x;
	vec2.y=lambda*vec.y;

	return vec2;
}

struct vecteur projectionX(struct vecteur vec){
	struct vecteur vecRes;

	vecRes.y=0;
	vecRes.x=vec.x;

	return vecRes;
}

struct vecteur addition(struct vecteur vec1, struct vecteur vec2){
	struct vecteur vecRes;

	vecRes.x=vec1.x+vec2.x;
	vecRes.y=vec1.y+vec2.y;

	return vecRes;
}
double produitScalaire(struct vecteur vec1, struct vecteur vec2){
	double res;
	res=vec1.x*vec2.x+vec1.y*vec2.y;

	return res;
}