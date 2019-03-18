#include <stdio.h>

int main()
{
    int i,j,k,l=1,m,n,o,a[1000];
    printf("Input :\n");
    scanf("%d%d%d",&m,&n,&o);
    
    printf("Output :\n");
    
   while(n)
   {
       l=l*m;
       n--;
   }
    k=l%o;
    printf("%d",k);
    
    return 0;
}
