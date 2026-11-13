// Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>
int main()
{
  char s[500];
  int i,sp=0,d=0,x=0;
  fgets(s,sizeof s,stdin);
  for(i=0;s[i]&&s[i]!='\n';i++)
    if(s[i]==' ')
      sp++;
    else if(isdigit(s[i]))
      d++;
    else if(!isalpha(s[i]))
      x++;
  printf("Spaces=%d, Digits=%d, Special=%d",sp,d,x);
  return 0;
}
