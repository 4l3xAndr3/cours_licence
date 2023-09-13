#include <stdio.h>
#include "point.h"
#include "ville_t.h"

int main(){
	point_t p = newP(2,4);
	affichepoint(&p);
	printf("%2.2f \n",normepoint(&p));


	ville_t v =newVille("brest",29,200);
	afficheville(&v);
}
