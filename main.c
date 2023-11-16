#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  //int i = 4; //result : 4, 4, 4
  int i = 300; //

  int*pi = &i;
  char*pc = &i;

  printf("%i, %i, %i\n", i, *pi,*pc);
  system("PAUSE");	
  return 0;
}
