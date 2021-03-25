#include<stdio.h>
int main()
{
	long long int n,i,x=0;
	scanf("%lld",&n);
	if(n>=1&&n<10)
	 for(i=1;i<=n;i++)
	     x++;
    if(n>=10&&n<=100)
    {
    	x=9;
    	for(i=11;i<=n;i++)
    	 if(i%11==0)
         x++;
	}
	if(n>100&&n<=1000)
	{
		x=18;
		for(i=101;i<=n;i++)
	     if(i%10==i/100)
	     {
	     	x++;
		 }
	}
	if(n>1000&&n<=10000)
	{
		x=108;
		for(i=1001;i<=n;i+=110)
	//	if(i%10==i/1000||i%100==i/1000+(i/100-(i/100)*10)*10)
	    
		x++;
	//	if(i==2002||3003||4004||5005||6006||7007||8008||9009)
	//	x++;
	}
  
     
    printf("\n%lld",x);
	return 0;
}
