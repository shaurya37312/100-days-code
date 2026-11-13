// Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main()
{
  char s[500];
  int f[26]={0},i;
  scanf("%499s",s);
  for(i=0;s[i];i++)
  {
    int x=s[i]-'a';
    if(x>=0&&x<26)
    {
      if(f[x])
      {
        printf("%c",s[i]);
        return 0;
      }
      f[x]=1;
    }
  }
  puts("No repeating character");
  return 0;
}
