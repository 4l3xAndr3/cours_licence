#include <stdio.h>

int division(int nb1,int nb2 ,int * ptrreste,int * ptrresult){
	if (nb2==0){
		return -1;
	}else{
		*ptrresult=nb1/nb2;
		*ptrreste=nb1%nb2;
		return 1;
	}
}


int main(){
	int nb1,nb2,reste,result;

	scanf("%d", &nb1);
	scanf("%d", &nb2);

	if (division(nb1,nb2,&reste,&result) == 1)
	{
		printf("%d %d\n",result,reste);
	}
	

}	