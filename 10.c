#include <stdio.h>

//goto 대신에 if를 사용한 예제. goto나 if 와 break를 사용하면 Error에서 멈추지만,  if만 사용하면 Error가 나와도 계속 끝까지 진행해버린다. 
//결국 하고자 하는 말은 goto 사용할 것
//jmp 명령어는 CPU에 매우 안좋음
//goto의 이점과 CPU 파이프라인
/* 
앞서서 만든 goto예제는 
if 와 break를 조합한 버전과
goto 로 처리하는 버전을 가지고 있다.

if문은 기본적은로 mov, cmp, jmp로 구성된다.
goto는 jmp하나로 끝이다.

for문이 여러개 생기면 if, break 조합의 경우 
for문의 갯수만큼 mov, cmp, jmp를 해야한다.
문제는 바로 jmp명령어이다.

call이나 jmp를 CPU instruction(명령어) 레벨에서 
분기 명령어라고 하고 이들은
CPU 파이프라인에 매우 치명적인 손실을 가져다준다.

기본적으로 아주 단순한
CPU의 파이프라인을 설명하자면 
아래와 같은 3단계로 구성된다.

1. Fetch - 실행해야할 명령어를 물어옴
2. Decode - 어떤 명령어인지 해석함
3. Executr - 실제 명령어를 실행시킴

파이프라인이 짧은 것부터 긴 것이
5단계 ~ 수십 단계로 구성된다.
(ARM, Intel 등등 다양한 프로세서들 모두 마찬가지)

그런데 왜 jmp 나 call등의 분기 명령어가 문제가 될까?

기본적으로 분기 명령어는 파이프라인을 때려부순다.
이 뜻은 가장 단순한 CPU가 실행가지 3clock을 소요하는데
파이프라인이 깨지니 쓸데없이 또 다시 3 clock을 버려야함을 의미한다.
(만약 파이프라인의 단계가 수십단계라면 
분기가 여러번 발생하면 
파이프라인 단계 x 분기 횟수만큼
CPU clock을 낭비하게 된다.
즉 성능면에서도 goto가 월등히 압도적이다.
(jmp 1번에 끝나니까)


*/

int main(void)
{
   int i, j, k;
   
   for(i = 0; i < 5; i++)
   {
      for(j = 0; j < 5; j++)
      {
         for(k = 0; k < 5; k++)
         {
            if((i == 2) && (j ==2) && (k == 2))
            {
                printf("Error!!!\n");
                goto err_handler;
            }
            else
            {
                printf("Data\n");
            }
         }
      }
   }
   return 0;

err_handler:
    printf("Goto Zzang!\n");
 
    return -1;
  
}

