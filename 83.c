#include <stdio.h>

int main()
{
    int i,j,k,l,m,a[1000],b[1000];
    printf("Input");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
    
    for(i=0;i<l;i++)
    {
       
       if(i==0)
           k=(a[i]&a[j]);
      else
      k=(k|a[i]);
       
    }
printf("%d",k);
    return 0;
}
