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
for(i=1;i<=n-1;i++)
{
    m=0;
 for(j=i+1;j<=n;j++)
 {
     if(a[i]==a[j])
    {
        a[j]='\0';
 }
 }

}

for(i=1;i<=n;i++)
{
    if(a[i]!='\0')
    printf("%d ",a[i]);
}

    return 0;
}
