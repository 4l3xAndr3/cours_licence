#include <stdio.h>

int factorielleIte(int nb){
	int result=1;
	for (int i = 1; i < nb+1; ++i)
	{
		result = result *i;
	}
	return result;
}


int factorielleRec(int nb){
   if (nb <= 1)
      return 1;
   else
      return nb * factorielleRec(nb - 1);
}

int main(){
	int nb;
	scanf("%d", &nb);
	printf("iteratif : %d \n",factorielleIte(nb));
	printf("reucrsif : %d \n",factorielleRec(nb));
}