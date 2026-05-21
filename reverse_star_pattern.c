#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter rows: ");
    scanf("%d", &n);

    // Reverse Star Triangle Pattern

    for(i = n; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
