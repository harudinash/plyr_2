#include <stdio.h>

int main()
{
    int i,j,k,l,m,a[1000],b[1000],x=1,y=1,z,s=1;
    printf("Input");
    scanf("%d%d",&l,&m);
   /* for(i=0;i<l;i++)
    scanf("%d",&a[i]);*/
    printf("Output :\n");
    
 /*   for(i=0;i<l;i++)
    {
         
       
       if(i==0)
           k=(a[i]^a[i+1]);
     else
     k=(k^a[i+1]);
       
       
    }*/
  k=l-m;
  //l=l-1;
  while(l)
  {
    x=x*l;  
    l--;
  }
  while(m)
  {
      s=s*m;
      m--;
  }
  while(k)
  {
      y=y*k;
      k--;
  }
  z=x/(y*s);
  
printf("%d",z);
    return 0;
}
