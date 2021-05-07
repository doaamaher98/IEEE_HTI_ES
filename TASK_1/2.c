/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 6/5/2020							 */
/*****************************************************/

#include "stdio.h"
void main()
{

	int n =12;
	int i,j;


	for (i=1 ; i<=n ; i++)
	{
		for(j=1; j<=n ; j++)
		{
			printf("%d x %d = %d", i,j,i*j);
			printf("\n");
		}
	}
}
