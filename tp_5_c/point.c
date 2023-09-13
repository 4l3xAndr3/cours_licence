#include <stdio.h>
#include <math.h>

#include "point.h"


void affichepoint(point_t *p){
	printf("(%d ; %d)\n",p->x,p->y );
}

point_t newP(int x,int y){
	point_t p;
	p.x=x;
	p.y=y;

	return p;
}


float normepoint(point_t *p){
	float pointN;

	pointN =(p->x*p->x)+(p->y*p->y);
	pointN = sqrt(pointN);
	return pointN;
	}
