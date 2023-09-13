#include <stdio.h>
#include <stdlib.h>


#define MAX 16

void afftab2d(int tab2d[MAX][MAX],int ligne,int cols){

	for (int i = 0; i < ligne; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d ",tab2d[i][j]);
		}
		printf("\n");
	}

}

void produitMatrice(int m1[MAX][MAX],int m2[MAX][MAX],int m3[MAX][MAX],int n){
	int i,j,k;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int som=0;
			for (int k = 0; k < n; k++){
				som =som+m1[i][k]*m2[k][j];
			}
			m3[i][j]=som;
		}
	}

}



int randomtab(int tab2d[MAX][MAX],int ligne,int cols){
	for (int i = 0; i < ligne; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			tab2d[i][j]=rand()%100 + 1;
		}
		
	}
}

int main()
{

	int matrice1[MAX][MAX];
	int matrice2[MAX][MAX];
	int resultat[MAX][MAX];

	randomtab(matrice1,3,3);
	randomtab(matrice2,3,3);

	produitMatrice(matrice1,matrice2,resultat,3);
	afftab2d(resultat,3,3);


}