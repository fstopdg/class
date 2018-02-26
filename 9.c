#include <stdio.h>

//for(;;) 무한루프 예제. 
//무한루프 끄는 법 : ctrl + c

int main(void)
{
    int i, result = 'A';
  
    for(;;)
    {
       printf("%c\n", result);
    }
    return 0;
}

