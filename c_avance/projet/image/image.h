typedef struct{
	int nblignes,nbcol;
	int rowstride;
	int tabpixel[];
}image;

image createImage();
void destroyImage(image DImage);
int setpixel();
int getpixel();