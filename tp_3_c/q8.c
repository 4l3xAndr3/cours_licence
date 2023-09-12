#include <stdio.h>

int monstrcmp(char chaine1[],char chaine2[]){
	int i=0;
	while(chaine1[i] != '\0'){
		
		if (chaine1[i]!=chaine2[i])
		{
			if (chaine1[i]>=chaine2[i])
				return 1;
			else
				return -1;
		}
		i++;
	}
	return 0;
}


int monstrcmp_Vcorrection(char chaine1[],char chaine2[]){
	int i=0;
	while(chaine1[i]==chaine2[i]){
		if (chaine1[i]=='\0')
			return 0;
		i++;
	}
	if(chaine1[i]<chaine2[i])
		return -1;
	else
		return 1;
}






int main(){
	char chaine1[]="testc",chaine2[]="testb";

	printf("%d\n",monstrcmp(chaine1,chaine2) );
	printf("%d\n",monstrcmp_Vcorrection(chaine1,chaine2) );
}