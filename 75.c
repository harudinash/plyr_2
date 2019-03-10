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
  
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(b[i]<b[j])
          m++;
      }
  }
  printf("%d",m);
    return 0;
}
