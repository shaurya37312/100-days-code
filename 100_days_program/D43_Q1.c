// Reverse a string.
#include <stdio.h>
#include <string.h>
int main()
{
  char s[500],t;
  int i,n;
  fgets(s,sizeof s,stdin);
  s[strcspn(s,"\n")]=0;
  n=strlen(s);
  for(i=0;i<n/2;i++)
  {
    t=s[i];
    s[i]=s[n-1-i];
    s[n-1-i]=t;
  }
  puts(s);
  return 0;
}
