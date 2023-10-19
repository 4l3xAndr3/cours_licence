#include <stdio.h>


int main(){
	char car;
	int nblignes=0,nbmots=0,nboctets=0,mots=0;
	while((car=getchar())!=EOF){
		if (car=='\n')
			nblignes++;

		if (mots==0 && car=='\n'||car==' '||car=='\t'){
			mots=1;
			nbmots++;
		}else if(mots==1) 
			mots=0;

		nboctets++;
	}

	printf("c=%d lignes=%d mots=%d \n",nboctets,nblignes,nbmots);
}
