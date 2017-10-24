#include<stdio.h>
#include<string.h>

int main()
{
    char a[10][200];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        //fflush(stdin);
        //gets(a[i]);
        scanf("%[^\n]",&a[i]);
    }
    
    for(i=0;i<n;i++)
        printf("%s\n",a[i]);

        return 0;
}