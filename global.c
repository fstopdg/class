#include <stdio.h>

//곱하기, 더하기에 return을 주지않은 것이 특징
//()에 아무것도 안적으면 (void)와 같은 의미

int glob_val = 7;

void multi(void)
{
       glob_val *= 3;
}


void add(void)
{
       glob_val += 3;
}

int main(void)
{
       add();
       multi();
       printf("glob_val = %d\n", glob_val);

       return 0;
}        
