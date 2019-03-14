#include <stdio.h>

int main()
{
    int i,p,j,k,l=0,m,x,n,a[10000];
    printf("Input :\n");
    scanf("%d",&n);
   
    printf("Output :\n");
    
    while(n)
    {
        m=n%10;
        a[i]=m;
        n=n/10;
        
       
     // printf("n=%d m=%d",n,m);
        i++;
    }
  
    
    printf("%d",a[0]+a[i-1]);

    return 0;
}
