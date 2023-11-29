#include "zpixel/zpixel.h"
#include "image/image.h"
#include "zpixel/arbre.c"

#include <stdlib.h>
#include <stdio.h>
#include <glib.h>


#include <glib.h>

void print_tree(GNode *node, gpointer user_data) {

    gint level = GPOINTER_TO_INT(user_data);
	zpixel *data=(zpixel *)node->data;

    for (gint i = 0; i < level; ++i) {
        g_print("  ");
    }
    
    g_print("r=%d v=%d b=%d\n", data->r,data->v,data->b);

    if (node->children) {
        g_node_children_foreach(node, G_TRAVERSE_ALL, (GNodeForeachFunc)print_tree, GINT_TO_POINTER(level + 1));
    }
}



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
	zpixel * zpixelcouleur = createZpixel(2,2,2,50,20,100,0);
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
	zpixel * zpixelcouleur2 = createZpixel(7,7,5,80,50,200,0);
	float resDist=distanceCouleur(zpixelcouleur,zpixelcouleur2);
	if ((int)resDist==108) printf("true\n"); 
	else printf("FALSE = distance : %f\n",resDist);





	printf("\n---------------------test image----------------\n");
	unsigned char r,v;
	image * image1=createImage(4,4);
	printf("image vide (%d,%d):\n",image1->nbcol,image1->nblignes);
	//afficheImage(image1);



	printf("test setpixel :");
	setpixel(image1,5,1,155,200,166);
	if (image1->data[40]==155 && image1->data[41]==200 && image1->data[42]==166)printf("true\n");
	else printf("FALSE pixel=(%d,%d,%d)\n",image1->data[4],image1->data[1],image1->data[2]);


	printf("test getpixel :");
	
	unsigned char b = getpixel(image1,5,1,&r,&v);
	if (r==155 && v==200 && b==166)printf("true\n");
	else printf("FALSE pixel=(%d,%d,%d)\n",r,v,b);

	setpixel(image1,5,5,0,0,0);

	printf("test projection zpixel :");
	projection(zpixelcouleur,image1);
	if(getpixel(image1,zpixelcouleur->x,zpixelcouleur->y,&r,&v)==100 && r==50 && v==20 && getpixel(image1,zpixelcouleur->x+1,zpixelcouleur->y+1,&r,&v)==100)printf("true\n");
	else afficheImage(image1);

	printf("\n");
	//afficheImage(image1);



	projection(zpixelcouleur2,image1);
	printf("\n");
	//afficheImage(image1);


	printf("--------------------test arbres-----------------\n");
	printf("test\n");
	GNode * noeud =construireArbre(0,0,4,image1);
	printf("test\n");
	printf("taille=%d \n",g_node_max_height(noeud));
	printf("test\n");
	print_tree(noeud,0);


/*
	GNode * noeud2 = g_node_new(zpixelnoir);
	zpixel * data;
	data =noeud2->data;
	printf("%d\n",data->r);
*/
}