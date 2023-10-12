#include <stdio.h>


int main(int argc, char const *argv[],char *envp[])
{
	printf("%d\n",argc );
	printf("------\n");

	while(*argv)
		printf("%s\n",*argv++);
	printf("------\n");

	while(*envp)
		printf("%s\n",*envp++);
}