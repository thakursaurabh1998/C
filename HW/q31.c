#include<stdio.h>

int main()
{
	int n, i=1, factor_count, k;

	printf("Enter number(n): ");
	scanf("%d", &n);
	printf("Factors of %d are:\n",n);
	
	while(n>=i)
	{
		if(!(n%i))
		{
			k=1;
			factor_count=0;
			while(i>=k)
			{
				//printf("k=%d \nfact=%d\n",k,factor_count);
				if(!(i%k))
				{
					factor_count++;
				}
				k++;
			}
			if(factor_count==2)
			{
				printf("%d\n",i);
			}
		}
		i++;
	}
	return 0;
}