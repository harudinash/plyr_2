#include <stdio.h>

int main()
{
    int i=1,j,k=1,l,a[10000],m;
    printf("Input :\n");
    scanf("%d%d",&l,&m);
   
    printf("Output :\n");
   
 while(m)
 {
     i=i*l;
     m--;
 }
   
   printf("%d",i);
    return 0;
}
