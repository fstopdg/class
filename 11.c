#include <stdio.h>

//goto 대신에 if와 break를 사용한 예제. goto는 전체에 한 번만 사용하나, if와 break를  사용할 경우 for문 개수만큼 설정해주어야 한다.

int main(void)
{
	int i, j, k, flag;

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			for(k = 0; k < 5; k++)
			{
				if((i == 2) && (j ==2) && (k == 2))
				{
					printf("Error!!!\n");
					flag = 1;
				}
				else
				{
					printf("Data\n");
				}

				if(flag)
				{
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		if(flag)
		{
			break;
		} 



	}
}
