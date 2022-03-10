#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter numerator and denominator for first number\n");
  scanf("%d%d",num1,den1);
  printf("enter numerator and denominator for second number\n");
  scanf("%d%d",num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3,int *gcd)
{
  int i;
  *num3=(num1*den2)+(num2*den1);
  *den3=(den1*den2);
  
    for(int i=1;i<=*num3 && i<=*den3;++i)
      {
        if((*num3)%i==0 && (*den3)%i==0);

      *gcd=i;
        }
  
}
void output(int num1, int den1, int num2, int den2, int num3, int den3,int gcd)
{
  printf("sum of two fractions is %d/%d+%d/%d=%d/%d",num1,den1,num2,den2,num3/gcd,den3/gcd);
  printf("\n");
}
int main()
{
  int num1,den1,num2,den2,num3,den3,gcd ;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3,&gcd);
  output(num1,den1,num2,den2,num3,den3,gcd);
  return 0;
}

