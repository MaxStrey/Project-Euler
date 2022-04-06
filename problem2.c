#include <stdio.h>

int main()
{
    int num2 = 1, num3 = 2;
    printf("%d\n", num2);
    printf("%d\n", num3);
    int n = 20;
    int sum_evens = 0;
    while (num3 < 4000000)
    {
        int nextnum = num2 + num3;
        printf("%d\n", nextnum);
        if (num3 % 2 == 0)
        {
            sum_evens = sum_evens + num3;
        }
        num2 = num3;
        num3 = nextnum;



        
    }   
    printf("The sum of all evens terms is: %d\n", sum_evens);

}