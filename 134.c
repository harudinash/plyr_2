#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,a[1000];
    printf("Input :\n");
    scanf("%d%d%d",&n,&m,&l);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
    
    for(i=0;i<n;i++)
    {
        for(j=m;j<l;j++)
        {
           // printf("%d",a[i]);

            if(a[i]==j)
            {
                printf("%d",a[i]);
                k=1;
                break;
            }
        }if(k==1)
        break;
    }
if(k==1)
//printf("%d",a[i]);
    return 0;
}
