#include <stdio.h>
#include <math.h>

void prime_number(int m,int n); 

main()
{
  int m,n;
  printf("enter the range of number,seperated by ,:");
  scanf("%d,%d",&m,&n);
  prime_number(m,n);
}
void prime_number(int m,int n)
{
  int  i,j,k,leap=1,h=0;
  for(i=m;i<=n;i++)
      {   
        k=sqrt(i+1);
        for(j=2;j<=k;j++)
          if(i%j==0)
          {   
            leap=0;
            break;
          }
          if(leap)
          {
            printf("%6d",i);
            h++;
            if(h%10==0)
              printf("\n");
          }
          leap=1;
      }
  printf("\ntotal prime_number is:%d\n",h);
}
