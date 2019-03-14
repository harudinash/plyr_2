#include <stdio.h>

int main()
{
   int i,j,k,l,m,n;
   printf("Input :\n");
   
   scanf("%d%d",&m,&n);
   
   printf("Output :\n");
   for(i=m;i<=n;i++)
   {
       if(i%2!=0)
       {
           l=l+i;
       }
   }
   printf("%d",l);
    return 0;
}
