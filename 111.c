#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,a[100000],b[100000],c[100000];
    printf("Input :\n");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
    }
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
printf("Output :\n");


for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(a[i]==b[j])
        {
            c[k]=a[i];
            k++;
        }
    }
}
for(i=0;i<k;i++)
{
    for(j=0;j<k;j++)
    {
        if(c[j]>c[i])
        {
            m=c[j];
            c[j]=c[i];
            c[i]=m;
        }
    }
}
for(i=0;i<k;i++)
printf("%d ",c[i]);
    return 0;
}
