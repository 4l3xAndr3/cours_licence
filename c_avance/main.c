#include "chaine.h"
#include <stdio.h>
int main(){
    char chaine[80]="unechaine@";
    char chaine2[80]="unechaine";
    /*
    printf("%d\n",STRLEN(chaine));
    STRCPY(chaine,chaine2);
    printf("%s\n",chaine2);
    STRCAT(chaine,chaine2);
    printf("%s\n",chaine);
    printf("%d\n",STRCMP(chaine,chaine2));
    printf("%d\n",supLettre('e',chaine));
    printf("%s\n",chaine);*/
    printf("%d\n",caraMDP(chaine));
    printf("%d\n",caraMDP(chaine2));
}
