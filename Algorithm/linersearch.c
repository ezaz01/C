#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x, i;
    printf("Enter the value of x:");
    scanf("%d", &x);

    for (i = 0; i < sizeof(arr); i++)
    {
        /* code */
        if (arr[i] == x)
        {
            break;
        }
    }

    if (arr[i] == x)
    {
        /* code */
        printf("Target element  found in an array");
    }

    else
    {
        printf("Target element not found in an array");
    }
}