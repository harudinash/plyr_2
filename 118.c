#include <stdio.h>

int main()
{
   int i,j,k,l,m,n;
   char a[10000],b[10000];
   printf("Input :\n");
   gets(a);
   printf("Output :\n");
   m=0;
   for(k=0;a[k]!='\0';k++);
   for(i=0;i<k;i++)
   {
       n++;
       if(a[i]==' ')
       {
          if(n>l)
          {
              printf("n=%d",n);
              l=n;
           j=i;
           n=0;
          }
       }
       
   }
   for(i=j;i>=0;i--)
   {
       if(a[i]==' ')
       break;
       else
      { b[l]=a[i];
       
       l--;
      }
   }
   for(i=0;b[i]!='\0';i++)
   printf("%c",b[i]);
    return 0;
}
