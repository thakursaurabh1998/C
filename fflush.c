#include<stdio.h>
#include<string.h>

int main()
{
    char str[20][40];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(str[i]);
    }
    for(i=0;i<n;i++)
    {
        //fflush(stdin);
        printf("%s\n",str[i]);
    }

    return 0;
}
