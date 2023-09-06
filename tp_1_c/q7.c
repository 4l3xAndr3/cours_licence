#include <stdio.h>
int main()
{
		char car;
		int nbcars = 0,nblignes = 0,nbmots = 0,mots=0;

		while((car = getchar()) != EOF){
			
			if (mots == 0 && car != ' ' || car != '\n'|| car != '\n')//calcule nb de mots
			{
				mots=1;
				nbmots++;
			}else if (mots == 1){
				mots=0;
			}


			if (car=='\n') nblignes++;//calcules de lignes

			nbcars++;//calcules de caracteres
		}



		printf("c=%d lignes=%d mots=%d \n",nbcars,nblignes,nbmots);
}