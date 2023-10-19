#include <string.h>
#include <stdio.h>

void rechercheRemplace(char car[],char modifier[],char modification[]){
	for (int i = 0; i < strlen(car); ++i)
		for (int j = 0; j < strlen(modifier); ++j)
			if(modifier[j]==car[i])
				car[i]=modification[j];
}

int main()
{
	char aModifier[3]={'a','b','c'};
	char aSubstituer[3]={'*','%','!'};
	char car[]="la cabane au Canada";
	rechercheRemplace(car,aModifier,aSubstituer);
	printf("%s\n",car);
}