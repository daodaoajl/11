#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 10;
  char c = 'a';

  int *iptr;//정수형 포인터 변수 iptr선언;
  iptr = &i;//iptr이 i를 가리키게 함;
  char *cptr;//문자형 포인터 변수 cptr선언;
  cptr = &c;//cptr이 c를 가리키게 함;
  int *iptr2;//정수형 포인터 변수 iptr2선언;
  iptr = &iptr;//iptr2가 iptr이 가리키는 곳을 동일하게 가리키게 함;


  printf("i : %p\n%p (size:%i)\n",iptr,&i,sizeof(iptr));
  printf("c : %p\n%p (size:%i)\n",cptr,&c,sizeof(cptr));
  printf("iptr2: %p, %i\n", iptr2, *iptr2);

  system("PAUSE");	
  return 0;
}
