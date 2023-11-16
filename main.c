#include <stdio.h>
#include <stdlib.h>

//call by value

/*void swap (int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void main(void)
{
  int a = 3;
  int b = 5;
  swap(a,b);
  printf("a:%i,b:%i\n",a,b);
  
  system("PAUSE");	
  return 0;
}*/
//결과  a : 3, b : 5

//call by reterence

void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void main(void)
{
  int a = 3;
  int b = 5;
  swap(&a,&b);
  printf("a:%i,b:%i\n",a,b);

  system("PAUSE");	
  return 0;
}
// 결과 a : 5, b : 3  
