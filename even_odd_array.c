#include <stdio.h>
void main()
{
    int n, temp = 0;
    printf("Enter the size of array  :");
    scanf("%d", &n);
    int arr[n];
    // take the element in array
    printf("Enter the element :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    // logic for rearranging in even -odd
    for (int i = 0; i < n; i += 2)
    {
        // it's logic for when odd -even
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        // it's logic for when even-even or odd- odd simultaneously
        if ((arr[i] % 2 != 0 && arr[i + 1] % 2 != 0) || (arr[i] % 2 == 0 && arr[i + 1] % 2 == 0))
        {
            temp = arr[i + 1];
            arr[i + 1] = arr[i + 2];
            arr[i + 2] = temp;
        }
        // it's logic for when starting already even
        if (arr[0] % 2 == 0)
        {
            continue;
        }
    }
    // print the final rearrange of array
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}