#include <stdio.h>

int main()
{
    int i,j,k,l=0,m,n,a[i];
    printf("Input :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Output :\n");
    for(i=0;i<n-1;i++)
    {
        m=a[i];
        a[i]=a[i+1];
        a[i+1]=m;
        i++;
    }
    for(i=0;i<n;i++)
printf("%d ",a[i]);
    return 0;
}
