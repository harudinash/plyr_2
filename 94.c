#include <stdio.h>

int main()
{
    int i,j,k,l=0,m,n,a[100000];
    printf("Input :\n");
    scanf("%d",&n);
   
    printf("Output :\n");
    
    while(n)
    {
        m=n%10;
        a[i]=m;
        j=n/10;
        n=j;
        l++;
      // printf("n=%d m=%d",n,m);
        i++;
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                printf("yes");
                k=1;
                break;
            }
        }
        if(k==1)
        break;
    }
    if(k==0)
printf("no ");
    return 0;
}
