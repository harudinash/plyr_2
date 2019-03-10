#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[10000],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&b[i]);
   
    printf("Output :\n");
  
  for(i=0;i<n-1;i++)
  {
      if(b[i]<b[i+1])
      {
          m++;
          if(m>p)
          p=m;
      }
      
      if(b[i]>b[i+1])
      {
          
          m=0;
      }
      
  }
  
  printf("%d",p+1);
    return 0;
}
