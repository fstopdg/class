#include <stdio.h>

int main(void)
{
    int global_area = 1;
    
    int local_area1 = 2;
    int local_area2 = 3;
    
    {
      int local_area1 = 2;
      printf("global_area = %d\n", global_area);
      printf("local_area1 = %d\n", local_area1);
    }

    {
      int local_area2 = 3;
      printf("global_area = %d\n", global_area);
      printf("local_area2 = %d\n", local_area2);
    }
  
    printf("global_area = %d\n", global_area);
    printf("local_area2 = %d\n", local_area2);
    printf("local_area1 = %d\n", local_area1);

    //scope 개념
    //printf("local_area1 = %d\n, local_area1);
    //printf("local_area2 = %d\n, local_area2);   위 두 문장을 줄 경우, 동작x(main 함수에서 local_area1,2 에 대한 변수를 주지 않았으므로 동작하지 않는다.)
    //위 두문장을 동작이 되게 하려면 main함수 또는 외부에서 설정을 해주어야한다.
    
    return 0;
}
