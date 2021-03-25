#include<stdio.h>
int main()
{
	long long int a,i=0,CFN,p=0,j=0,q=0;
	scanf("%lld",&CFN);
	long int b[CFN]={0};
	for(i=1;i<=100;i++)
	{
		a=i+1;
		if(CFN%(a*a*a)==0)
		{
			printf("Not Cube Free");
			break;
		}
		else
		{
		    for(j=1;j<=CFN;j++)
			{
				if(j%(a*a*a)==0)
	            	{
		            	q++;
		            }
		        p++;
		    }   	
		}
	   	
	}
	if(i==101)
	printf("%lld",p/100-q);
	return 0;
}
