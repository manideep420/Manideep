#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    int largest = arr[0], secondLargest = arr[0];

    
    for(i = 0; i < n; i++)
    {
        
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("The largest and second largest elements in the array are: %d and %d", largest, secondLargest);

    return 0;
}
