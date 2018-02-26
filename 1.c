#include <stdio.h>

int main(void)
{
    int number = 0;
    while(1)
    {   
        number++; 
        printf("%d\n", number);
        if(number > 100)
           break;
    }
    return 0;
}
