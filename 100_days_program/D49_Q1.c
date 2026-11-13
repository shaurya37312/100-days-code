// Print the initials of a name.
#include <stdio.h>
#include <string.h>
int main()
{
  char s[500];
  int i;
  fgets(s,sizeof s,stdin);
  if(s[0]&&s[0]!=' ' )
    printf("%c.",s[0]);
  for(i=1;s[i];i++)
    if(s[i-1]==' '&&s[i]!=' '&&s[i]!='\n')
      printf("%c.",s[i]);
  return 0;
}
