#include <string.h>
#include <stdio.h>

int alphaEntier(char car[]){
	int val=0;
	for (int i = 0; i < strlen(car); ++i)
	{
		if (car[i]!=' ' || car[i]!="\n"){
			val=val*10+car[i]-'0';
		}
	}
	return val;
}


int main(){
	char car[]="123456789";
	printf("%d\n",alphaEntier(car));
}