#include <stdio.h>
#include <limits.h>

unsigned int fact(unsigned int n){
	int res=1;
	for (int i = 1; i < n+1; ++i)
	{
		if(i>UINT_MAX/res)
			return 0;
		res=res*i;
	}
	
	return res;
}
unsigned int fact2(unsigned int n){
	if (n==0)
		return 1;

	unsigned int res=fact2(n - 1);
	if(n>UINT_MAX/res)
		return 0;

	return n*res;
}




int main(){
	printf("%d \n",fact(5));
	printf("%d \n",fact2(555));
}