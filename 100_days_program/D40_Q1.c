// Perform diagonal traversal of a matrix.
#include <stdio.h>
int main()
{
  int r,c,a[20][20],i,j,s;
  scanf("%d%d",&r,&c);
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
  for(s=0;s<r+c-1;s++)
  {
    if(s%2==0)
    {
      i=s<r?s:r-1;j=s-i;
      while(i>=0&&j<c)
        printf("%d ",a[i--][j++]);
    }
    else
    {
      j=s<c?s:c-1;
      i=s-j;
      while(j>=0&&i<r)
        printf("%d ",a[i++][j--]);
    }
  }
  return 0;
}
