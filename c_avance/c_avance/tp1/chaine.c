//ex1
int STRLEN(char chaine[]){
    int i=0;
    while(chaine[i]!='\0'){
        i++;
    }
    return i;
}

void STRCPY(char chaineDest[], char chaineSrc[]){
	int i=0;
	while(chaineDest[i]!='\0'){
		chaineSrc[i]=chaineDest[i];
        i++;
    }
    chaineSrc[i]='\0';

}

void STRCAT(char chaine1[], char chaine2[]){
	int val=STRLEN(chaine1);
	for (int i = 0; i < STRLEN(chaine2); ++i){
		chaine1[val+i]=chaine2[i];
	}
}

int STRCMP(char chaine1[], char chaine2[]){
	for (int i = 0; i < STRLEN(chaine1); ++i){
		if (chaine1[i]!=chaine2[i]){
			if (chaine1[i]>chaine2[i]){
				return 1;
			}
			else{
				return 0;	
			}
		}
	}
	return 0;
}

int supLettre(char lettre, char chaine[]){
	int j;
	for (int i = 0; i < STRLEN(chaine); ++i){
		if (lettre==chaine[i]){
			for (j = i; j < STRLEN(chaine)-1; ++j)
			{
				chaine[j]=chaine[j+1];
			}
			chaine[j]='\0';
			return 1;
		}
	}
	return 0;
}
//ex2
int caraMDP(char mdp[]){
	int taille=STRLEN(mdp);
	if (taille<7)
		return 0;

	for (int i = 0; i < taille; ++i){
		//printf("%c\n",mdp[i] );
		if (('!'<=mdp[i]&&'@'>=mdp[i])||('['<=mdp[i]&&'\60'>=mdp[i])){
			return 1;
		}
	}
	return 0;
}