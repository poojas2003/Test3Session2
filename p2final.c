#include<stdio.h>
#include<math.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;

Fraction input_fraction()
{
  Fraction a;
  printf("enter the number\n");
  scanf("%d%d",&a.num,&a.den);
  return a;
}
Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  int num1,den1,num2,den2,num3,den3;
  Fraction x=den1*den2*den3;
  
  num1=num1*x/den1;
   num2=num2*x/den2;
     num3=num3*x/den3;
    if(num1<num2 && num1<num3)
      return num1;
  else if(num2<num3)
    return num2;
  else
    return num3; 
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction small)
{
if(small==num1)
  printf("%d is small",f1);
  else if(small==num2)
    printf("%d is small",f2);
  else
    printf("%d is small",f3);
}
int main()
{
  
  Fraction a,f1,f2,f3,small;
  a=input_fraction();
  
  return small;
  }
  
  
}