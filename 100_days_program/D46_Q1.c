// Remove all vowels from a string.
#include <stdio.h>
#include <ctype.h>
int main()
{
  char s[500],c;
  int i;
  fgets(s,sizeof s,stdin);
  for(i=0;s[i];i++)
  {
    c=tolower(s[i]);
    if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')
      putchar(s[i]);
  }
  return 0;
}
