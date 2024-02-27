#include <stdio.h>

// Creating a function to traverse the element of the array
int traverse(int n, int array[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}
// Function to delete element from the array
int delete(int n, int array[], int del)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == del)
        {
            array[i] = !array[i];
        }
        else
        {
            printf("%d ", array[i]);
        }
    }
}
// Function to search the index of the element
int search(int n, int array[], int item)
{
    int i = 0;
    while (array[i] == item)
    {
        if (array[i] == item)
        {
            printf("The item present on %d", i + 1);
        }
        i++;
    }
}

void main()
{
    int n, del, item;
    printf("Enter the size of array :");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    traverse(n, array);
    printf("Enter the deleted element:\n");
    scanf("%d", &del);
    delete (n, &array, del);
    printf("\nEnter the search element:\n");
    scanf("%d", &item);
    search(n, array, item);
}