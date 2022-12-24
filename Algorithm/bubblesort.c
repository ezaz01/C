#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number of elements: ");
    for ( i = 0; i <n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    
    for ( i = 0; i <n-1; i++)
    {
        /* code */
        for ( j = 0; j <n-1; j++)
        {
            /* code */
            if (arr[j]>arr[j+1])
            {
                /* code */
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
            
        }
        
    }

    for (i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    }
}