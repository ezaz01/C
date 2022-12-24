#include <stdio.h>
void quicksort(int array[25], int left, int right)
{
    int i, j, pivot, temp;

    if (left < right)
    {
        pivot = left;
        i = left;
        j = right;

        while (i < j)
        {
            while (array[i] <= array[pivot] && i < right)
                i++;
            while (array[j] > array[pivot])
                j--;
            if (i < j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

        temp = array[pivot];
        array[pivot] = array[j];
        array[j] = temp;
        quicksort(array, left, j - 1);
        quicksort(array, j + 1, right);
    }
}

int main()
{
    int i, n, array[25];

    printf("How many elements are u going to enter?: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
        

    quicksort(array, 0, n - 1); 

    printf("Order of Sorted elements: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", array[i]);
    }
        

    return 0;
}