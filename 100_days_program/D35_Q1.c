// Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>
int main()
{
  int n,a[100],i,m1=INT_MIN,m2=INT_MIN;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]>m1)
    {
      m2=m1;
      m1=a[i];
    }
    else if(a[i]>m2&&a[i]!=m1)m2=a[i];
  }
  if(m2==INT_MIN)
    puts("No second largest");
  else 
    printf("%d",m2);
  return 0;
}
