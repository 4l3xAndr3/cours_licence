#ifndef _ZPIXEL_H_
#define _ZPIXEL_H_
#include "../image/image.h"
typedef struct{
	int x,y;
	int size;
	unsigned char r,v,b;
	int degradation;
}zpixel;


zpixel * createZpixel(int x,int y,int size,unsigned char r,unsigned char v,unsigned char b,int degradation );

void destroyZpixel(zpixel * DZpixel);
zpixel * createZpixelNoir(int x,int y,int size,int degradation );
zpixel * createZpixelBlanc(int x,int y,int size,int degradation );
float luminosite(zpixel * zpixel1);
int saturation(zpixel * zpixel1);
float distanceCouleur(zpixel * zpixel1,zpixel * zpixel2);
int projection(zpixel * zpixel1,image * imageProject);
#endif