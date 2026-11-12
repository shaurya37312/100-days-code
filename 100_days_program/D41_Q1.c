// Count characters in a string without using built-in length functions.
#include <stdio.h>
int main()
{
  char s[500];
  int n=0;
  fgets(s,sizeof s,stdin);
  while(s[n]&&s[n]!='\n')
    n++;
  printf("%d",n);
  return 0;
}

