#include "zpixel.h"
#include <stdlib.h>
#include <stdio.h>
int main(){
	zpixel * zpixelnoir = createZpixel(0,0,2,0,0,0,0);
	printf("noir : R=%d ,V=%d ,B=%d\n",zpixelnoir->r,zpixelnoir->v,zpixelnoir->b );

	zpixel * zpixelblanc = createZpixel(0,0,2,255,255,255,0);
	printf("blanc : R=%d ,V=%d ,B=%d\n",zpixelblanc->r,zpixelblanc->v,zpixelblanc->b );

	zpixel * zpixelcouleur = createZpixel(0,0,2,50,20,100,0);
	printf("couleur : R=%d ,V=%d ,B=%d\n",zpixelcouleur->r,zpixelcouleur->v,zpixelcouleur->b );
}