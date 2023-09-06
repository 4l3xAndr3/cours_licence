#include <stdio.h>
int main()
{
	int note=0;
	printf("note :");
	scanf("%d", &note);
	
	if (note<10){printf("pas moyenne\n");}
	else if (note<12){printf("ok\n");}
	else if (note<14){printf("AB\n");}
	else if (note<16){printf("B\n");}
    else {printf("TB\n");}
}