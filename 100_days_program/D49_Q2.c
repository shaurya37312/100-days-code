// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main()
{
  char s[500],copy[500],*p,*words[50];
  int n=0,i;
  fgets(s,sizeof s,stdin);
  s[strcspn(s,"\n")]=0;
  strcpy(copy,s);
  p=strtok(copy," ");
  while(p&&n<50)
  {
    words[n++]=p;
    p=strtok(NULL," ");
  }
  for(i=0;i<n-1;i++)
    printf("%c.",words[i][0]);
  if(n)
    printf(" %s",words[n-1]);
  return 0;
}

