#include <stdio.h>

int main()
{
    int n = 100;
    for (int i = 1; i < n; i++)
    {
        int m = n / 2;
        for (int j = 1; j < m; j++)
        {
            if (i % j != 0)
            {
                printf("%d\n", j);
            }

        }

    }
    return 0;
}