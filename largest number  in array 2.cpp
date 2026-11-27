// Write a C program to find the largest number  in array
#include <stdio.h>

int main()
{
    int arr[100], n, i, max;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
         max = arr[i];
        }
    }
    printf("Largest number = %d", max);

    return 0;
}
