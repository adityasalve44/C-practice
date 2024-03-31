#include<stdio.h>
#include<math.h>
int main()
{
  int a;
  double sq;
  printf("\nEnter a value:");
  scanf("%d",&a);
  sq = sqrt(a);
  printf("The square root of %d: %lf\n",a,sq);  
  return 0;
}
