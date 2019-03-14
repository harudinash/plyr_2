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
        k=n%10;
        n=n/10;
        l=l+(k*i);
        i=i*2;
    }
printf("%d",l);
    return 0;
}
