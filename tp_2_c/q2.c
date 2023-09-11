#include <stdio.h>

int aff_somme(char operateur,int nb1,int nb2){
	int result;
	if (operateur == '+'){
		result=nb1+nb2;
		return result;
	}else if(operateur == '-'){
		result=nb1-nb2;
		return result;
	}else if(operateur == '*'){
		result=nb1*nb2;
		return result;
	}else if(operateur == '/'){
		if (nb2!=0)
		{
			result=nb1/nb2;
			return result;
		}else{
			return -1;	
		}
		
	}/*else{
		printf("operateur non reconnue \n");
	}*/
	

}


int main()
{
	int nb1,nb2;
	scanf("%d", &nb1);
	scanf("%d", &nb2);
	printf("%d \n",aff_somme('/',nb1,nb2));
}