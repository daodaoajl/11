#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 10;
  char c = 'a';

  int *iptr;//������ ������ ���� iptr����;
  iptr = &i;//iptr�� i�� ����Ű�� ��;
  char *cptr;//������ ������ ���� cptr����;
  cptr = &c;//cptr�� c�� ����Ű�� ��;
  int *iptr2;//������ ������ ���� iptr2����;
  iptr = &iptr;//iptr2�� iptr�� ����Ű�� ���� �����ϰ� ����Ű�� ��;


  printf("i : %p\n%p (size:%i)\n",iptr,&i,sizeof(iptr));
  printf("c : %p\n%p (size:%i)\n",cptr,&c,sizeof(cptr));
  printf("iptr2: %p, %i\n", iptr2, *iptr2);

  system("PAUSE");	
  return 0;
}
