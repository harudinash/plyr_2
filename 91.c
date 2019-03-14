#include <stdio.h>

int main()
{
    int i,j,k,l=0,m,n;
    printf("Input :\n");
    scanf("%d",&n);
    printf("Output :\n");
    i=1;
    while(n)
    {
        k=n%2;
        n=n/2;
        l=l+(k*i);
        i=i*10;
    }
printf("%d",l);
    return 0;
}
