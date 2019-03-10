#include <stdio.h>

int main()
{
    int i,j,k=1,l,a[10000],m;
    printf("Input :\n");
    scanf("%d%d",&l,&m);
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
   
   for(i=0;i<l;i++)
   {
       if(a[i]==m)
       printf("%d",i+1);
   }
   
 //  printf("%d",m);
    return 0;
}
