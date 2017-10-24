#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,count=0;
	char temp;
	gets(str);
	//printf("%s",str);
	int len = strlen(str);
	
	/*for(i=0;i<len;i++)
	{
		if(str[i]>=65 && str[i]<=90)
			str[i]+= 32;
		else if(str[i]>=97 && str[i]<=122)
			str[i]-= 32;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			count++;
	}
	printf("%d\n",count);*/
	strrev(str);
	
	/*len--;
	for(i=0;i<len/2;i++)
	{
		temp = str[i];
		str[i] = str[len-i];
		str[len-i] = temp;
	}
	for(i=0;i<len;i++)*/
	printf("%s",str);
	return 0;
}
