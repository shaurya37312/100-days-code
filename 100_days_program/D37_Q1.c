// Find the sum of each row of a matrix and store/print the sums.
#include <stdio.h>
int main()
{
  int r,c,a[20][20],i,j,s;
  scanf("%d%d",&r,&c);
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
  for(i=0;i<r;i++)
  {
    s=0;
    for(j=0;j<c;j++)
      s+=a[i][j];
    printf("%d ",s);
  }
  return 0;
}
