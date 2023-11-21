#include "zpixel.h"
#include <stdlib.h>
#include <glib.h>

void couleurDegradation(int x,int y,unsigned char * r,unsigned char * v,unsigned char * b){
	*r = x%256;
	*v = y%256;
	*b = (x+y)%256;
	//degradation = (size-1)*(1+fabs(x-y));
}
a;
zpixel * createZpixel2(x,y,size){
	zpixel * zpixelP;
	zpixelP = (zpixel *)malloc(sizeof(zpixel));
	if(zpixelP == NULL)
		return 0;

	zpixelP->x=x;
	zpixelP->y=y;
	zpixelP->size=size;

	return zpixelP;
}


GNode construireArbre(int x,int y,int size){

	zpixel *zpixelArbre=createZpixel2(x,y,size);
	GNode *noeud = g_node_new(&zpixelArbre);


	unsigned char r,v,b;
	int degradation;
	if(size==1){
		couleurDegradation(x,y,&r,&v,&b);
		zpixelArbre->r=r;
		zpixelArbre->v=v;
		zpixelArbre->b=b;
	}else{
		GNode * gaucheHaut =construireArbre(x,y,size/2);
		g_node_append(zpixelArbre,gaucheHaut);

		GNode * gaucheBas =construireArbre(x+size/2,y,size/2);
		g_node_append(zpixelArbre,gaucheBas);
		
		GNode * droiteHaut =construireArbre(x,y+size/2,size/2);
		g_node_append(zpixelArbre,droiteHaut);
		
		GNode * droiteBas =construireArbre(x+size/2,y+size/2,size/2);
		g_node_append(zpixelArbre,droiteBas);
	}
	return noeud;
}	