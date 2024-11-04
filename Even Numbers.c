#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int has_even_numbers = 0;
    for (int num = 1;num <= N;num++)
    {
        if (num % 2 == 0)
        {
            printf("%d\n",num);
            has_even_numbers = 1;
        }
    }
    if (!has_even_numbers)
    {
        printf("-1\n");
    }
}
