// Check if a string is a palindrome
#include <stdio.h>
#include <string.h>
int main()
{
  char s[500];
  int i,n,ok=1;
  fgets(s,sizeof s,stdin);
  s[strcspn(s,"\n")]=0;
  n=strlen(s);
  for(i=0;i<n/2;i++)
    if(s[i]!=s[n-1-i])
      ok=0;
  puts(ok?"Palindrome":"Not palindrome");
  return 0;
}
