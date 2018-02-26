#include <stdio.h>

void count_static_value(void)
{
    static int count = 1;
    printf("count = %d\n", count);
    count++;
}

int main(void)
{
    int i;
    for(i = 0; i < 7; i++)
       count_static_value();
  
    return 0;

}

// static을 사용하면, scope내에 있어도 전역변수의 역할을 한다.
//                    강제적으로 전역변수가 되어 count++이 7까지 진행된다.
// static이 없을경우, count 는 1로 고정


