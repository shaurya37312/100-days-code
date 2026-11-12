// Rotate an array to the right by k positions.
#include <stdio.h>
int main()
{
  int n,a[100],b[100],k,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  scanf("%d",&k);
  k%=n;
  for(i=0;i<n;i++)
    b[(i+k)%n]=a[i];
  for(i=0;i<n;i++)
    printf("%d ",b[i]);
  return 0;
}
