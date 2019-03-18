#include <stdio.h>

int main()
{
   int i,j,k,l,m,n=0;
   char a[100],b[100];
   printf("Input :\n");
   gets(a);
   
   printf("Output :\n");
   for(n=0;a[n]!='\0';n++);
  
   for(i=n-1;i>=0;i--)
{
    printf("%c",a[i]);
   printf("-");
}
    return 0;
}
