#include "image.h"
#include <stdlib.h>
#include <stdio.h>


image * createImage(int nbcol,int nblignes){
	image * newImage;

	newImage = (image *)malloc(sizeof(image));
	if(newImage == NULL)
		return 0;

	newImage->nblignes=nblignes;
	newImage->nbcol=nbcol;
	newImage->rowstride=nbcol*3+1;

	int dim=newImage->rowstride*nblignes;
	newImage->data=(unsigned char *)malloc(dim*sizeof(unsigned char));
	if(newImage->data == NULL){
		free(newImage);
		return 0;
	}
	return newImage;
}

void destroyImage(image * DImage){
	free(DImage->data);
	free(DImage);
}

int setpixel(image * imageSet,int x,int y,unsigned char r,unsigned char v,unsigned char b){
	if(x>=imageSet->nblignes || y>=imageSet->nbcol)return 0;

	int localisation = y*imageSet->rowstride+x*3;
	imageSet->data[localisation] =r;
	imageSet->data[localisation+1] =v;
	imageSet->data[localisation+2] =b;
	return 1;
}

unsigned char getpixel(image * imageGet,int x,int y,unsigned char *r,unsigned char *v){
	int localisation = y*imageGet->rowstride+x*3;
	*r=imageGet->data[localisation];
	*v=imageGet->data[localisation+1]; 
	return imageGet->data[localisation+2]; 
}


void afficheImage(image * image1){
	unsigned char r,v,b;
	for (int i = 0; i < image1->nblignes; i++){
		for (int j = 0; j < image1->nbcol; j++)
		{
			b=getpixel(image1,j,i,&r,&v);
			printf("(%d,%d,%d)",r,v,b);
		}
		printf("\n");
	}
}