#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,a[1000];
    char b[10000];
    printf("Input :\n");
    gets(b);
    printf("output :\n");
    
    for(i=0;b[i]!='\0';i++);
    k=i;
    
    for(i=0;i<k;i++)
    {
        if(b[i]%2==0)
        {
            if(b[i+1]%2==1)
            l++;
        }
        else if(b[i]%2==1)
        {
            if(b[i+1]%2==0)
            l++;
        }
    }
    printf("%d",l);

    return 0;
}
