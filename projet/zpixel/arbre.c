#include "zpixel.h"
#include "../image/image.h"
#include <stdlib.h>
#include <glib.h>
#include <math.h>


void calculCouleur(int x,int y,unsigned char * r,unsigned char * v,unsigned char * b){
	*r = x%256;
	*v = y%256;
	*b = (x+y)%256;
}
int calculDegradation(int x,int y,int size){
	int degradation = (size-1)*(1+fabs(x-y));

	return degradation;
}

GNode * construireArbre(int x,int y,int size,image * imageArbre){
	int nblignes = imageArbre->nblignes;
	int nbcol = imageArbre->nbcol;
	if(imageArbre->nblignes%2!=0 || imageArbre->nbcol%2!=0){
		while(nblignes%2==0){
			nblignes++;
		}
		while(nbcol%2==0){
			nbcol++;
		}
	}

	zpixel *zpixelArbre=createZpixel(x,y,size,0,0,0,0);
	GNode *noeud = g_node_new(zpixelArbre);


	unsigned char r,v,b;
	int degradation;
	if(size==1){
		calculCouleur(x,y,&r,&v,&b);
		zpixelArbre->r=r;
		zpixelArbre->v=v;
		zpixelArbre->b=b;

	}else{
		if (imageArbre->nblignes > x && imageArbre->nbcol > y){
			GNode * gaucheHaut =construireArbre(x,y,size/2,imageArbre);
			g_node_append(noeud,gaucheHaut);
		}
		if (imageArbre->nblignes > x && imageArbre->nbcol > y){
			GNode * gaucheBas =construireArbre(x+size/2,y,size/2,imageArbre);
			g_node_append(noeud,gaucheBas);
		}
		if (imageArbre->nblignes > x && imageArbre->nbcol > y){
			GNode * droiteHaut =construireArbre(x,y+size/2,size/2,imageArbre);
			g_node_append(noeud,droiteHaut);
		}
		if (imageArbre->nblignes > x && imageArbre->nbcol > y){
			GNode * droiteBas =construireArbre(x+size/2,y+size/2,size/2,imageArbre);
			g_node_append(noeud,droiteBas);
		}
		//calculCouleurDegradation()
	}
	return noeud;
}

/*
#include "zpixel.h"
#include "../image/image.h"
#include <stdlib.h>
#include <glib.h>
#include <math.h>


void calculCouleur(int x,int y,unsigned char * r,unsigned char * v,unsigned char * b){
	*r = x%256;
	*v = y%256;
	*b = (x+y)%256;
}
int calculDegradation(stack_t pile,int x,int y,int size,unsigned char * r,unsigned char * v,unsigned char * b){
	int degradation = (size-1)*(1+fabs(x-y));

	return degradation;
}

GNode * construireArbre(int x,int y,int size,image * imageArbre){
	int nblignes = imageArbre->nblignes;
	int nbcol = imageArbre->nbcol;

	if(imageArbre->nblignes%2!=0 || imageArbre->nbcol%2!=0){
		while(nblignes%2==0){
			nblignes++;
		}
		while(nbcol%2==0){
			nbcol++;
		}
	}

	zpixel *zpixelArbre=createZpixel(x,y,size,0,0,0,0);
	GNode *noeud = g_node_new(zpixelArbre);

	unsigned char r,v,b;
	int degradation;


	if(size==1){
		calculCouleur(x,y,&r,&v,&b);
		zpixelArbre->r=r;
		zpixelArbre->v=v;
		zpixelArbre->b=b;
	}else{
		//int data;
		//stack_t * pile=stack_create(4);
		//stack_init(pile);
		if (imageArbre->nblignes > x && imageArbre->nbcol > y){
			GNode * gaucheHaut =construireArbre(x,y,size/2,imageArbre);
			//data=gaucheHaut->data;
			//stack_push(pile,data);
			g_node_append(noeud,gaucheHaut);
		}
		if (imageArbre->nblignes > x && imageArbre->nbcol > y){
			GNode * gaucheBas =construireArbre(x+size/2,y,size/2,imageArbre);
			//data=gaucheBas->data;
			//stack_push(pile,data);
			g_node_append(noeud,gaucheBas);
		}
		if (imageArbre->nblignes > x && imageArbre->nbcol > y){
			GNode * droiteHaut =construireArbre(x,y+size/2,size/2,imageArbre);
			//data=droiteHaut->data;
			//stack_push(pile,data);
			g_node_append(noeud,droiteHaut);
		}
		if (imageArbre->nblignes > x && imageArbre->nbcol > y){
			GNode * droiteBas =construireArbre(x+size/2,y+size/2,size/2,imageArbre);
			//data=droiteBas->data;
			//stack_push(pile,data);
			g_node_append(noeud,droiteBas);
		}
		//calculCouleurDegradation()
	}
	return noeud;
}

*/