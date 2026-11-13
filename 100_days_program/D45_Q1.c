// Count frequency of a given character in a string.
#include <stdio.h>
#include <string.h>
int main()
{
  char s[500],c;
  int i,n=0;
  fgets(s,sizeof s,stdin);
  s[strcspn(s,"\n")]=0;
  scanf(" %c",&c);
  for(i=0;s[i];i++)
    if(s[i]==c)
      n++;
  printf("%d",n);
  return 0;
}
