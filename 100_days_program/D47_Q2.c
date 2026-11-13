// Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main()
{
  char s[500],*p,*best=NULL;
  int max=0;
  fgets(s,sizeof s,stdin);
  p=strtok(s," \n");
  while(p)
  {
    int n=strlen(p);
    if(n>max)
    {
      max=n;
      best=p;
    }
    p=strtok(NULL," \n");
  }
  if(best)
    puts(best);
  return 0;
}
