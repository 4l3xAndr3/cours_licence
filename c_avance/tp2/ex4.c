#include <string.h>
#include <stdio.h>

int rechercheMotif(const char chaine[], const char motif[]){
	int j=0,i=0;
	for (i = 0; i < strlen(chaine); i++){
		if (j==strlen(motif))return -1;

		if (chaine[i]==motif[j])
			j++;
		else
			j=0;
	}
	return 0;
}


int rechercheMotifVpointeur(const char * chaine, const char * motif){
	int j=0,i=0;
	for (i = 0; i < strlen(chaine); i++){
		if (j==strlen(motif))return -1;

		if (chaine[i]==motif[j])
			j++;
		else
			j=0;
	}
	return 0;
}


int main(){
	/*char car[]="la cabane au Canada";
	char motif[]="aux";
	printf("%d\n",rechercheMotif(car,motif));
*/
	char *car="la cabane xaux Canada";
	char *motif="aux";
	printf("%d\n",rechercheMotifVpointeur(car,motif));
}