#include <stdio.h>

void input(int*num1,int*den1,int*num2,int*den2)
{
  printf("Enter the values of Numerator\n");
  scanf("%d %d",num1,num2);
  printf("Enter the values of denominator\n");
  scanf("%d %d",den1,den2);
}

void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
   *num3=(num1*den2)+(num2*den1);
   *den3=den1*den2;
}

void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("The Sum of %d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}

int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}