#include <stdio.h>

int main()
{
    int i,j,k,l=1,m=1,n,o,a[1000],b[1000];
    printf("Input :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Output :\n");
    
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               a[j]='\0';
               m++;
           }
       }
       if(b[m]=='\0')
       b[m]=a[i];
       else
       {
           if(b[m]>a[i])
           b[m+1]=a[i];
           else
           b[m-1]=a[i];
       }
       m=1;
   }
   for(i=n;i>=0;i--)
   {
       if(b[i]!='\0')
       printf("%d ",b[i]);
   }
    return 0;
}
