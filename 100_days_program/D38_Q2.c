// Check if a matrix is symmetric.
#include <stdio.h>
int main()
{
  int n,m,a[20][20],i,j,ok=1;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
  if(n!=m)
    ok=0;
  for(i=0;i<n&&ok;i++)
    for(j=0;j<m;j++)
      if(a[i][j]!=a[j][i])
        ok=0;
  puts(ok?"True":"False");
  return 0;
}
