#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,a[1000];
    printf("Input :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
    
    if(n%2==0)
    l=(n-1)/2;
    else
    l=n/2;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
        
     
    for(i=0;i<=l;i++)
    printf("%d ",a[i]);
    for(i=n-1;i>l;i--)
    printf("%d ",a[i]);
    return 0;
}
