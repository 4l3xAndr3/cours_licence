
#ifndef __POINTH
#define __POINTH

struct point{
	int x,y;
};

typedef struct point point_t;


point_t newP(int x,int y);

void affichepoint(point_t *p);

float normepoint(point_t *p);

#endif