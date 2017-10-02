#include<stdio.h>

int main()
{
	int m, n, i, k, s=1, factor_count, new_num, a;
	printf("Number of terms you want to print prime palindrome series: ");
	scanf("%d", &m);

	for(i=1;i<=m;)
	{
		k=1;
		factor_count=0;
        n=s;
        new_num=0;
		while(n)
		{
			a = n%10;
			n /= 10;
			new_num = a + new_num*10;
		}
		if(s==new_num)
		{
			while(s>=k)
			{
				//printf("k=%d \nfact=%d\n",k,factor_count);
				if(!(s%k))
				{
					factor_count++;
				}
				k++;
			}
			if(factor_count==2 || s==1)
			{
				printf("%d\n",s);
				i++;
			}
		}
        s++;
	}	
	return 0;
}