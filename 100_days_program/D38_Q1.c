// Add two matrices.
#include <stdio.h>
int main()
{
  int r,c,a[20][20],b[20][20],i,j,r2,c2;
  scanf("%d%d",&r,&c);
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
  scanf("%d%d",&r2,&c2);
  for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
      scanf("%d",&b[i][j]);
  if(r!=r2||c!=c2)
    return 0;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      printf("%d ",a[i][j]+b[i][j]);
    putchar('\n');
  }
  return 0;
}
