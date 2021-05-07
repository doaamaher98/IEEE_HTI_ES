/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 8/5/2020							 */
/*****************************************************/
#include "stdio.h"

void Mod_2_D_Arr(int i,int j,int array[i][j], int value);

int main()
{
	int i,j,rowsm,colsm,valuem,rows,cols;
	int arr [10][10];

	printf("Enter the 2D Array rows and columns number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &rows, &cols);

	printf("Enter the 2D Array : ");
	fflush(stdin); fflush(stdout);
	for(i=0; i<rows ; i++)
	{
		for (j=0; j<cols ; j++)
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

	for(i=0; i<rows ; i++)
	{
		for (j=0; j<cols ; j++)
		{
			printf("\t%d" , arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void Mod_2_D_Arr(int i,int j,int array[i][j], int value)
{
	array[i][j] = value;
}