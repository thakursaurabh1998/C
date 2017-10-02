#include<stdio.h>

int main()
{
	int m, i, k, factor_count, a=0, b=1, c;
	printf("Number of terms you want to print prime fibonaci series: ");
	scanf("%d", &m);

	for(i=0;i<m;)
	{
		k=1;
		factor_count=0;
		c=b;
		b=a+b;
		a=c;
		while(a>=k)
		{
			//printf("k=%d \nfact=%d\n",k,factor_count);
			if(!(a%k))
			{
				factor_count++;
			}
			k++;
		}
		if(factor_count==2 || a==1)
		{
			printf("%d\n",a);
            i++;
		}
	}	
	return 0;
}