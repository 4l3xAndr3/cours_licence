#include "image.h"
#include <stdlib.h>
#include <stdio.h>


image * createImage(int nblignes,int nbcol){
	image * newImage;

	newImage = (image *)malloc(sizeof(image));
	if(newImage == NULL)
		return 0;

	newImage->nblignes=nblignes;
	newImage->nbcol=nbcol;
	newImage->rowstride=nbcol*3+1;

	int dim=newImage->rowstride*nblignes;
	newImage->data=(unsigned char *)malloc(dim*sizeof(unsigned char));

	return newImage;
}

void destroyImage(image * DImage){
	free(DImage->data);
	free(DImage);
}

int setpixel(image * imageGet,int x,int y){
}

int getpixel(image * imageGet,int x,int y){
	
}