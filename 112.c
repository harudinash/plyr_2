#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,a[1000];
    printf("Input :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
    
    while(n)
    {
        m=m+n;
        n--;
    }
printf("%d",m);
    return 0;
}
