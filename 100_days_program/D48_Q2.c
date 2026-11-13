// Reverse each word in a sentence without changing word order.
#include <stdio.h>
#include <string.h>
void rev(char*s,int l,int r)
{
  char t;
  while(l<r)
  {
    t=s[l];
    s[l++]=s[r];
    s[r--]=t;
  }
}
int main()
{
  char s[500];
  int i=0,start=0;
  fgets(s,sizeof s,stdin);
  s[strcspn(s,"\n")]=0;
  while(1)
  {
    if(s[i]==' "'[0]||s[i]==0)
    {
      rev(s,start,i-1);
      if(!s[i])
        break;
      start=i+1;
    }
    i++;
  }
  puts(s);
  return 0;
}

