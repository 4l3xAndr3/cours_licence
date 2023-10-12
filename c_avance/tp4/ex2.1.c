#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char *envp[]){
	for (int i = 1; i < argc; i++)
		for (int j = i+1; j < argc; j++)
			printf("%s,%s\n",argv[i],argv[j] );
			if(strcmp(argv[i] , argv[j])==0){
				argv[j]=argv[argc-1];
				argv[argc-1]=NULL;
				argc--;
			}
	while(*argv)
		printf("%s\n",*argv++);
}