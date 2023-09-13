#include "point.h"


#define MAXV 100
struct ville{
	char nom[MAXV];
	point_t coords;
};

typedef struct ville ville_t;

ville_t newVille(char nom[],int x,int y);

void afficheville(ville_t *v);