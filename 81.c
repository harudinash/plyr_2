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
       
       for(j=0;j<l;j++)
       {
           k=(a[i]&a[j]);
       if(k>=m)
        m=k;
       }
    }
printf("%d",m);
    return 0;
}
