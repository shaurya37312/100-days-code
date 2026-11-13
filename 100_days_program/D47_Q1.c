// Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
int main()
{
  char a[500],b[500];
  int f[256]={0},i;
  fgets(a,sizeof a,stdin);
  fgets(b,sizeof b,stdin);
  a[strcspn(a,"\n")]=0;
  b[strcspn(b,"\n")]=0;
  for(i=0;a[i];i++)
    f[(unsigned char)a[i]]++;
  for(i=0;b[i];i++)
    f[(unsigned char)b[i]]--;
  for(i=0;i<256;i++)
    if(f[i])
    {
      puts("Not anagrams");
      return 0;
    }
  puts("Anagrams");
  return 0;
}
