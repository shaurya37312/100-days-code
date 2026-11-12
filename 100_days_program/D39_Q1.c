// Check if the elements on the main diagonal of a matrix are distinct.
#include <stdio.h>
int main()
{
  int n,m,a[20][20],i,j,ok=1;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
  for(i=0;i<n&&i<m;i++)
    for(j=i+1;j<n&&j<m;j++)
      if(a[i][i]==a[j][j])
        ok=0;
  puts(ok?"True":"False");
  return 0;
}
