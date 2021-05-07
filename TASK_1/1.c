/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 6/5/2020							 */
/*****************************************************/
#include "stdio.h"

void main()
{

	int n,i,sum=0;
	printf("Enter the n value : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=1; i<=n ; i++)
	{
		sum+=i;
	}
	printf("The Sum is : %d",sum);
}
