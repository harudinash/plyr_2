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
        //printf("k=%d",k);
        n=n/10;
        l=l+(k*i);
        i=i*2;
        //printf(" l=%d ",l);
    }
    i=1;n=0;
     while(l)
    {
        k=l%8;
        //printf("k=%d",k);
        l=l/8;
        n=n+(k*i);
        i=i*10;
        //printf(" l=%d ",l);
    }
printf("%d",n);
    return 0;
}
