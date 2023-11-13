#include "zpixel.h"
#include "../image/image.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

// creation des zpixel
zpixel * createZpixel(int x,int y,int size,unsigned char r,unsigned char v,unsigned char b,int degradation ){
	zpixel * zpixelP;
	zpixelP = (zpixel *)malloc(sizeof(zpixel));
	if(zpixelP == NULL)
		return 0;

	zpixelP->x=x;
	zpixelP->y=y;
	zpixelP->size=size;
	zpixelP->r=r;
	zpixelP->v=v;
	zpixelP->b=b;
	zpixelP->degradation=degradation;


	return zpixelP;
}

zpixel * createZpixelNoir(int x,int y,int size,int degradation ){
	return createZpixel(x,y,size,0,0,0,degradation);
}
zpixel * createZpixelBlanc(int x,int y,int size,int degradation ){
	return createZpixel(x,y,size,255,255,255,degradation);
}

//destruction des zpixel
void destroyZpixel(zpixel * DZpixel){
	free(DZpixel);
}

//calcul de la luminositer d'un zpixel
float luminosite(zpixel * zpixel1){
	int r=(int)zpixel1->r;
	int v=(int)zpixel1->v;
	int b=(int)zpixel1->b;

	int max=(fmax(fmax(r,v),b));
	int min=(fmin(fmin(r,v),b));
	if (max==0 && min==0)return 0;

	return (max+min)/2;	
}

//calcul de la saturation d'un zpixel
int saturation(zpixel * zpixel1){
	float res;
	int r=zpixel1->r;
	int v=zpixel1->v;
	int b=zpixel1->b;
	float max=(fmaxf(fmaxf(r,v),b));
	float min=(fminf(fminf(r,v),b));
	if (max==0 && min==0)return 0;

	if(luminosite(zpixel1)<128){
		res=((max-min)/(max+min));
		res=255*res;
	}else
		res=255*((max-min)/(511-(max+min)));
	return res;
}


float distanceCouleur(zpixel * zpixel1,zpixel * zpixel2){
	float res;

	int r=pow((zpixel2->r-zpixel1->r),2);
	int v=pow((zpixel2->v-zpixel1->v),2);
	int b=pow((zpixel2->b-zpixel1->b),2);
	res=(r+v+b);
	res =sqrt(res);	

	return res;
}



int projection(zpixel * zpixel1,image * imageProject){
	for (int i = 0; i < zpixel1->size; ++i)
		for (int j = 0; j < zpixel1->size; j++){
			if (i<=imageProject->nblignes || j<=imageProject->nbcol)
				setpixel(imageProject,zpixel1->x+j,zpixel1->y+i,zpixel1->r,zpixel1->v,zpixel1->b);
		}
	return 1;
}

