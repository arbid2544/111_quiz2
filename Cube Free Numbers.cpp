#include<stdio.h>
int main()
{
	long int i,CFN,p=0;
	scanf("%ld",&CFN);
	for(i=1;i<=100;i++)
	{
		if(i*i*i%CFN==0)
		{
			p+=1;
			break;
		}
	    p+=1;	
	}
	if(i==101)
	printf("Not Cube Free");
	else
	printf("%d",p);
	return 0;
}
