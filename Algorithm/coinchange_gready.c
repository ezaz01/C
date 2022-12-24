#include<stdio.h>
int main()
{
    int n;
    printf("How many notes you have:");
    scanf("%d", &n);
    int arr[n], array[n], temp, i, j, value, count = 0, num, k = 0;
    printf("Notes are:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }

    printf("the sorted notes are:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n enter the money you have:");
    scanf("%d",&value);
    for ( i = 0; i < n; i++)
    {
        if(value>0)
        {
            if(value>=arr[i])
            {
                num=(value/arr[i]);
                count+=num;
                value=value -(num*arr[i]);
                array[k]= arr[i];
                k++;
            }
        }
    }


    for ( i = 0; i < k; i++)
    {
        printf("you shoud need %d ", array[i]);
    }
    
}