// Write a C program to find the average number in array
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    float avg;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum =sum+arr[i];
    }
    avg =(float)sum/n;
    printf("Average =%.2f",avg);
    return 0;
}
