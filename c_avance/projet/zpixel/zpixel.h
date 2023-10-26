#ifndef _ZPIXEL_H_
#define _ZPIXEL_H_

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

#endif