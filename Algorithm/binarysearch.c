#include <stdio.h>

int main()
{
    int arr[50], i, n, x, flag = 0, left, right, mid;

    printf("Enter size of array:");
    scanf("%d", &n);
    printf("\nEnter array element(ascending order)\n");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
        

    printf("Enter the element to search:");
    scanf("%d", &x);

    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (x == arr[mid])
        {
            flag = 1;
            break;
        }
        else if (x > arr[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (flag == 1)
    {
        printf("\nElement found %d\n", mid + 1);
        printf("Index found at position %d", arr[mid] - 1);
    }
        
    else
    {
        printf("\nElement not found");
    }
        

    return 0;
}
