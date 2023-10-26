#include "zpixel.h"
#include <stdlib.h>
#include <math.h>

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

void destroyZpixel(zpixel * DZpixel){
	free(DZpixel);
}

zpixel * createZpixelNoir(int x,int y,int size,int degradation ){
	return createZpixel(x,y,size,0,0,0,degradation);
}
zpixel * createZpixelblanc(int x,int y,int size,int degradation ){
	return createZpixel(x,y,size,255,255,255,degradation);
}


float luminosite(zpixel * zpixel1){
	int r=(int)zpixel1->r;
	int v=(int)zpixel1->v;
	int b=(int)zpixel1->b;

	int max=(fmax(fmax(r,v),r));
	int min=(fmax(fmax(r,v),r));

	if (max==0 && min==0)return 0;

	return (max+min)/2;	
}

float saturation(zpixel * zpixel1){
	float res;
	if(luminosite(zpixel1)<128)
		res=
}