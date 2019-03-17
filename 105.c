#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,a[1000],b[1000];
    printf("Input :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
printf("Output :\n");
for(i=1;i<=n;i++)
{
    m=0;
 for(j=1;j<=n;j++)
 {
     if(a[i]<a[j])
    {
        m=a[i];
        a[i]=a[j];
        a[j]=m;
        k=j;
 }
 }

}

for(i=1;i<=n;i++)
{
    for(k=1;k<=n;k++)
    {
        if(a[i]==b[k])
        {
            printf("%d ",k);
        }
    }
}


    return 0;
}
