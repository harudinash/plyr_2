#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,a[1000];
    printf("Input :\n");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
    
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            k=1;
            l++;
        }
    }
    if(k==0)
    printf("no");
    else
    {
        printf("yes %d",l);
    }
    
    
    return 0;
}
