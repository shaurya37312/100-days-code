// Print all substrings of a string
#include <stdio.h>
#include <string.h>
int main()
{
  char s[200];
  int i,j,k,n,first=1;
  scanf("%199s",s);
  n=strlen(s);
  for(i=0;i<n;i++)
    for(j=i;j<n;j++)
    {
      if(!first)
        putchar(',');
      for(k=i;k<=j;k++)
        putchar(s[k]);
      first=0;
    }
  return 0;
}
