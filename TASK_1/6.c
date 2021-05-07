/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 8/5/2020							 */
/*****************************************************/
#include "stdio.h"

void Mod_2_D_Arr(int i,int j,int array[][2], int value);

int main()
{
	int i,j,rowsm,colsm,valuem;
	int arr [2][2];


	printf("Enter the 2D Array[2][2] : ");
	fflush(stdin); fflush(stdout);
	for(i=0; i<2 ; i++)
	{
		for (j=0; j<2 ; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Enter the Locations you want to modify (row,column) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &rowsm, &colsm);

	printf("Enter the Value you want to update with : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &valuem);

	/* The Modified Array */
	printf("The Modified Array is : \n");

	Mod_2_D_Arr(rowsm,colsm,arr,valuem);

	for(i=0; i<2 ; i++)
	{
		for (j=0; j<2 ; j++)
		{
			printf("\t%d" , arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void Mod_2_D_Arr(int i,int j,int array[][2], int value)
{
	array[i][j] = value;
}
