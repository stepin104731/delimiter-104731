#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50] ="my_name_is:edcast;future'skills";
  char *p;

  p = strtok (string,"_:;'");
  while (p!= NULL)
  {
    printf ("%s\n",p);
    p = strtok(NULL, "_:;'");
  }
  return 0;
}
