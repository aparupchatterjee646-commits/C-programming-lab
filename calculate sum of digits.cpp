//write a c programe to calculate sum of digits 
#include<stdio.h>
int main()
{
	int n,sum=0,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	while (n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of the digit=%d",sum);
	return 0;
	
}
	

