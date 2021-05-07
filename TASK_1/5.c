/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 6/5/2020							 */
/*****************************************************/
#include "stdio.h"

int main()
{

	int arr1[20], arr2[20], size1, size2, i, j, k, merge[40],temp;

	printf("Enter Array 1 Size : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &size1);

	printf("Enter Array 2 Size : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &size2);

	printf("Enter Array 1 and 2 Elements : ");
	fflush(stdin); fflush(stdout);

	/* First Array */
	for(i=0; i<size1; i++)
	{
		scanf("%d", &arr1[i]);
		merge[i] = arr1[i];
	}
	k = i;  /* --> will give size1 value */

	fflush(stdin); fflush(stdout);

	/* Second Array */
	for(i=0; i<size2; i++)
	{
		scanf("%d", &arr2[i]);
		merge[k] = arr2[i];
		k++;
	}


	/* Merged Together */
	printf("Merged Array is : ");
	for(i=0; i<k; i++)
		printf("%d ", merge[i]);

	/* Sorting in ascending order */
	for (i=0; i<k; i++){
		for (j=i+1; j<k; j++)
		{
			if (merge[i]>merge[j])
			{
				temp = merge[i];
				merge[i]= merge[j];
				merge[j]= temp;
			}
		}
	}

	printf("\nThe Merged and sorted array:  ");
	for(i=0; i<k; i++)
		printf("%d ", merge[i]);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
}