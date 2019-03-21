#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,a[1000];
    printf("Input :\n");
    scanf("%d",&n);
    printf("output :\n");
    while(n)
    {
        m=n%10;
        if(m%2==1)
        {
            k=k+m;
        }
        n=n/10;
    }
    if(k%2==0)
    printf("E");
    else
    printf("O");
    

    return 0;
}
