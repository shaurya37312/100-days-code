// Toggle case of each character in a string.
#include <stdio.h>
#include <ctype.h>
int main()
{
  char s[500];
  int i;
  fgets(s,sizeof s,stdin);
  for(i=0;s[i];i++)
  {
    if(islower(s[i]))
      s[i]=toupper(s[i]);
    else if(isupper(s[i]))
      s[i]=tolower(s[i]);
  }
  printf("%s",s);
  return 0;
}
