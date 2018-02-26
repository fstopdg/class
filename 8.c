#include <stdio.h>

// result = 'A'에서 A로 작성하면 error
// for 예제.   for(i = 0, result = 'A') 대신에 변수선언시 i = 0, result = 'A'가능)
// widows 에서 c언어 사용시 변수미리 지정해주어야 된다. 위 문장에서 후자선택

int main(void)
{
   int i, result;
 
   for(i = 0, result = 'A'; i < 10; i++, result++)
   {
      printf("%c\n", result);
   }
   return 0;
}

