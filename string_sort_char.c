#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    gets(str);
    int len = strlen(str);
    int i,j;
    char temp;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-1;j++)
        {
            if(str[j]>str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("%s",str);

    return 0;
}