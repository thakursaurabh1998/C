#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j;
    char str[5][30];
    char temp[30];
    for(i=0;i<5;i++)
    {
        gets(str[i]);
        fflush(stdin);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(str[j][0]>str[j+1][0])
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",str[i]);
    }
    
    return 0;
}