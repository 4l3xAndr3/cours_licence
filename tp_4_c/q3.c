#include <stdio.h>
#include <string.h>

int main(int argc,char * argv[]){

	if (argc !=4) return -1;
	/*		
	if (strcmp(argv[1], argv[2])<0)
	{
		printf("%s %s \n",argv[1],argv[2] );
	}else{
		printf("%s %s \n",argv[2],argv[1] );
	}*/
	
	for (int i = 1; i == 3; i++)
	{

		if (strcmp(argv[i], argv[i+1])>0){
			char *tmp = argv[i];
			argv[i] = argv[i+1];
			argv[i+1] = tmp;
		}
	}
	printf("%s %s %s \n",argv[1],argv[2],argv[3] );
}