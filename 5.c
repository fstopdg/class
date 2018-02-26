#include <stdio.h>

//contine 예제. number == 5 인 경우는 제외하고 출력
//0 : 거짓, 1 : 참    -    while(1)인 경우는 계속 반복
//                         while(num<10) 에서 0이 되면 동작이 정지


int main(void)
{
   int number = 0;
  
    while(1)
   {
       number++;
       
       if(number == 5)
                continue;
    
       printf("%d\n", number);
       
       //contine가 이 쪽에 위치하면 printf에서 이미 5가 나와서 의미가 없음
  
       if(number == 10)
                break;
   }
   return 0;
}


