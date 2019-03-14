#include <stdio.h>

int main()
{
    int i,p,j,k,l=0,m,x,n,a[10000];
    printf("Input :\n");
    scanf("%d%d%d",&n,&p,&k);
   
    printf("Output :\n");
    
    while(n)
    {
        m=n%10;
        a[i]=m;
        n=n/10;
        
       
     // printf("n=%d m=%d",n,m);
        i++;
    }
  
    x=p+k;
    x=i-x;
    printf("%d",a[x]);

    return 0;
}
