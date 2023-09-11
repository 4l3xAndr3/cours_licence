#include <stdio.h>

int occrurences(int cpts[]){
	int taille=0;
	char car = getchar();


	while(car!= EOF){
		if (car!='\n' || car != ' ')
		{
			taille++;
		}
		
		cpts[car -'a']++;
		car = getchar();
	}
	return taille;
}





int main(){
	int cpts[26]={0};
	float taille=occrurences(cpts);
	for (int i = 0; i < 26; ++i)
	{
		if (cpts[i]>0)
		{
			int result=cpts[i]/taille*100;
			printf("%c : %d %\n",'a'+i,result);
		}
	}

}