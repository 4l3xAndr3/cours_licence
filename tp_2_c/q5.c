#include <stdio.h>

int division(int nb1,int nb2 ,int reste[1],int result[1]){
	if (nb2==0){
		return -1;
	}else{
		result[0]=nb1/nb2;
		reste[0]=nb1%nb2;
		return 1;

	}
}


int main(){
	int nb1,nb2,reste[1],result[1];

	scanf("%d", &nb1);
	scanf("%d", &nb2);

	if (division(nb1,nb2,reste,result) == 1)
	{
		printf("%d %d\n",result[0],reste[0]);
	}
	

}	