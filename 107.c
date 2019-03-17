#include <stdio.h>

int main()
{
   int i,j,k,l,m,n;
   char a[10000],b[1000];
   printf("Input :\n");
   gets(a);
   gets(b);
   printf("Output :\n");
   
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]==b[0])
       {
           j=i;
           
           for(k=0;b[k]!='\0';k++)
           {
               if(a[j]!=b[k])
               {
                   l=1;
                   
                   break;
               }
               j++;
           }
           if(l==0)
           {
               n++;
               printf("%d",n);
               break;
           }
           
           }
           if(a[i]==' ')
           n++;
   }
   

    return 0;
}
