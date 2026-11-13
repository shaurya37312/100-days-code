// Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>
int main()
{
  char s[500],c;
  int i,v=0,k=0;
  fgets(s,sizeof s,stdin);
  for(i=0;s[i];i++)
  {
    c=tolower(s[i]);
    if(c>='a'&&c<='z')
    {
      if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        v++;
      else
        k++;
    }
  }
  printf("Vowels=%d, Consonants=%d",v,k);
  return 0;
}
