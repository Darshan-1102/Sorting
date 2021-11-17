#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp, c;

    for(i=0; i<n; i++ )
    {
        c=0;
        for(j=1; j<n-i; j++)
        {
            if(arr[j]<arr[j-1])
            {
                temp= arr[j];
                arr[j]= arr[j-1];
                arr[j-1]=temp;
            }
            c=1;
        }
        if(c!=1)
            break;
    }
    printf("\nThe elements in sorted manner are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int n, k;
    int arr[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(k=0; k<n; k++)
    {
        scanf("%d", &arr[k]);
    }
    bubbleSort(arr, n);
}