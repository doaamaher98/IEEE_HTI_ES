/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 6/5/2020							 */
/*****************************************************/

void main()
{

	int arr[]={2,4,1,9,42,22};
	int large=0,i;

	printf("Array : ");
	for (i=0 ; i<6; i++)
	{
		printf("%d ", arr[i]);
		if (arr[i] > large)
		{
			large = arr[i];
		}
	}
	printf("\nThe largest integer in array is : %d",large);
}