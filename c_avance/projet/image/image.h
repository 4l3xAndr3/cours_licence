#ifndef _IMAGE_H_
#define _IMAGE_H_

typedef struct{
	int nblignes,nbcol;
	int rowstride;
	unsigned char * data;
}image;

image * createImage(int nblignes,int nbcol);
void destroyImage(image * DImage);
int setpixel(image * imageSet,int x,int y,unsigned char r,unsigned char v,unsigned char b);
unsigned char getpixel(image * imageGet,int x,int y,unsigned char *r,unsigned char *v);

#endif