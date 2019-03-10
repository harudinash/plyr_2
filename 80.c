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
   //for(j=i;j<m+n;j++)
    //scanf("%d",&b[j]);
      printf("Output :\n");
  p=n;
  for(i=0;i<p;i++)
  {
      for(j=0;j<p;j++)
      {
          if(b[i]<b[j])
          {
              q=b[j];
             b[j]=b[i];
             b[i]=q;
          }
      }
  }
  
  k=b[n-1]-b[0];
  for(i=0;i<n-1;i++)
  {
      if((b[i+1]-b[i]<k)&&(b[i+1]-b[i]>=0))
      k=b[i+1]-b[i];
  }
  printf("%d ",k);
  //printf("%d",p+1);
    return 0;
}
