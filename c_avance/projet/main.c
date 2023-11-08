#include "zpixel/zpixel.h"
#include "image/image.h"
#include <stdlib.h>
#include <stdio.h>
int main(){
	printf("--------------------test zpixel----------------\n");
	printf("test zpixel noir :");
	zpixel * zpixelnoir = createZpixelNoir(0,0,2,0);
	if (zpixelnoir->r==0 && zpixelnoir->v==0 && zpixelnoir->b==0)printf("true\n");
	else printf("FALSE = noir : R=%d,V=%d ,B=%d\n",zpixelnoir->r,zpixelnoir->v,zpixelnoir->b );

	printf("test zpixel blanc :");
	zpixel * zpixelblanc = createZpixelBlanc(0,0,2,0);
	if (zpixelblanc->r==255 && zpixelblanc->v==255 && zpixelblanc->b==255)printf("true\n");
	else printf("FALSE =blanc : R=%d,V=%d,B=%d\n",zpixelblanc->r,zpixelblanc->v,zpixelblanc->b );

	printf("test zpixel couleur :");
	zpixel * zpixelcouleur = createZpixel(0,0,2,50,20,100,0);
	if (zpixelcouleur->r==50 && zpixelcouleur->v==20 && zpixelcouleur->b==100)printf("true\n");
	else printf("FALSE couleur : R=%d,V=%d,B=%d\n",zpixelcouleur->r,zpixelcouleur->v,zpixelcouleur->b );

	printf("test luminosite zpixel :");
	float resLumi=luminosite(zpixelcouleur);
	if (resLumi==60)printf("true\n"); 
	else printf("FALSE = luminosite:%f\n",resLumi);
	
	printf("test saturation zpixel :");
	float resSat=saturation(zpixelcouleur);
	if (resSat==170) printf("true\n"); 
	else printf("FALSE = luminosite:%f\n",resSat);

	printf("test distance zpixel :");
	zpixel * zpixelcouleur2 = createZpixel(0,0,2,80,50,200,0);
	float resDist=distanceCouleur(zpixelcouleur,zpixelcouleur2);
	if ((int)resDist==108) printf("true\n"); 
	else printf("FALSE = distance : %f\n",resDist);





	printf("\n--------------------test image----------------\n");


}