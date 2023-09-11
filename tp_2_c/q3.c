#include <stdio.h>

float devis(int enfant,int adulte){
	int tarifadulte=6,tariffamille=3,tarifcarte=7;
	float tarifenfant=3.5;
	float resultfamille,resultinviduel;

	resultinviduel = tarifenfant * enfant + tarifadulte * adulte;
	resultfamille = tariffamille * (enfant+adulte) + tarifcarte;

	if (resultfamille < resultinviduel && adulte > 0 && enfant > 0) {
		return resultfamille;
	}
	else{
		return resultinviduel;
	}


}

int main()
{
	int nb1,nb2;
	printf("enfant : ");
	scanf("%d", &nb1);
	printf("adulte : ");
	scanf("%d", &nb2);
	printf("%0.2f \n",devis(nb1,nb2));
} 