#include <stdio.h>
int main()
{
    int i;
    printf("Enter the value of i: ");
    scanf("%d", &i);

    if (i == 10)
    {
        if (i > 15)
        {
            printf("i is greater than 15\n");
        }
        if (i > 12)
        {
            printf("i is greater than 12\n");
        }
        else
        {
            printf("i is smaller than or equal to 12\n");
        }
    }
    else
    {
        if (i == 20)
        {
            if (i < 22)
            {
                printf("i is smaller than 22 too\n");
            }
            else
            {
                printf("i is greater than or equal to 22\n");
            }
        }
    }
    return 0;
}
