// Print each character of a string on a new line.
#include <stdio.h>
int main()
{
  char s[500];
  int i;
  fgets(s,sizeof s,stdin);
  for(i=0;s[i]&&s[i]!='\n';i++)
    printf("%c\n",s[i]);
  return 0;
}

