#include<stdio.h>
int main()
{
    long int a,i=0,N,p=0,j=0,q=0;
	scanf("%ld",&N);
	for(i=1;i<=100;i++)
	{
		a=i+1;
		if(N%(a*a*a)==0)
		{
			printf("Not Cube Free");
			break;
		}
		else
		{
		    for(j=1;j<=N;j++)
			{
				if(j%(a*a*a)==0)
	            	{
		            	q++;
		            
					}
				//if(i==2)
		        //p++;
		    }   	
		}	   	
	}
	//printf("\n%d %d\n",p,q);
	if(i==101)
	printf("%ld",N-q);
	return 0;
}
