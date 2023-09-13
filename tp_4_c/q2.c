#include <stdio.h>


int main(int argc,char * argv[]){

	if (argc >=3)
		if (atoi(argv[1])>atoi(argv[2]))
			printf("%s \n",argv[1]);
		else
			printf("%s \n",argv[2]);
		
		
	else
			printf("usage : %s <nb1> <nb2>\n",argv[0] );
}