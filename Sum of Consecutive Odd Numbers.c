#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        if (X > Y)
        {
            int temp = X;
            X = Y;
            Y = temp;
        }

        int sum = 0;
        for (int num = X + 1; num < Y; num++)
        {
            if (num % 2 != 0)
            {
                sum += num;
            }
        }

        printf("%d\n", sum);
    }
}
