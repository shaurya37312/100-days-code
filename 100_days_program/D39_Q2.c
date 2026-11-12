// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main()
{
  int n,m,a[20][20],i,j,s=0;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
  for(i=0;i<n&&i<m;i++)
    s+=a[i][i];
  printf("%d",s);
  return 0;
}

