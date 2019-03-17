#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,a[1000],b[1000];
    printf("Input :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
    }
printf("Output :\n");


for(i=0;i<n;i++)
{
    if(n>1)
  l=a[i];
  for(j=0;j<n;j++)
  {
      l=l+a[j];
   
    
}
printf("%d ",l);
l=0;
}

    return 0;
}
