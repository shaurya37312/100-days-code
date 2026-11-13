// Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main()
{
  char a[250],b[250],t[500];
  scanf("%249s%249s",a,b);
  if(strlen(a)!=strlen(b))
  {
    puts("Not rotation");
    return 0;
  }
  strcpy(t,a);
  strcat(t,a);
  puts(strstr(t,b)?"Rotation":"Not rotation");
  return 0;
}

