#include <stdio.h>

int main()
{
   int i,j,k,l,m,n;
   char a[9];
   printf("Input :\n");
   gets(a);
   printf("Output :\n");
   
   
       if(a[0]>'char32_t')
        k=1;
       
        if(a[0]=='3')
        {
            if(a[1]>'1')
            k=1;
           
        }
        if((a[1]<'0')||(a[1]>'9'))
        k=1;
        
        if((a[2]!='/')||(a[5]!='/'))
        k=1;
       
        if((a[3]>'1')||(a[3]<'0'))
        k=1;
        
        if(a[3]=='1')
        {
            if((a[4]<'0')||(a[4]>'2'))
            k=1;
           
        }
        for(i=6;i<=9;i++)
        {
        if((a[i]<'0')||a[i]>'9')
         k=1;break;
        
        }
        
if(k==0)
printf("yes");
else
printf("no");
    return 0;
}
