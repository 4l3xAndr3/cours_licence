typedef struct{
	int nblignes,nbcol;
	int rowstride;
	unsigned char * data;
}image;

image * createImage(int nblignes,int nbcol);
void destroyImage(image * DImage);
int setpixel();
int getpixel(image * imageGet,int r,int v,int b);