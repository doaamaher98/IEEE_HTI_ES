/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 6/5/2020							 */
/*****************************************************/

int summ (int *a, int *b);
void main()
{
	int x,y,sum;
	printf("Enter the first number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("Enter the second number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&y);
	sum = summ (&x,&y);
	printf("Their sum is : %d",sum);
}

int summ (int *a, int *b)
{
	int sum = *a+*b;
	return sum;
}
