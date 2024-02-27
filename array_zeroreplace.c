#include <stdio.h>
void main()
{
    int n, temp = 0;
    printf("Enter the size of array :");
    scanf("%d", &n);
    int array[n];
    printf("Enter the element of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    // logic for replace zero at end // is zero considered as odd or even  ? 
    //[1,0,3,0,5,6,7]    ----> [1,3,5,6,7,0,0]
    for (int i = 0; i < n; i++)
    {
        //
        if (array[i] == 0 && array[n - i - 1] == 0)
        {
            temp = array[i];
            array[i] = array[n - i - 2];
            array[n - i - 2] = temp;
        }
        if (array[i] == 0 && array[n - i - 1] != 0)
        {
            temp = array[i];
            array[i] = array[n - i - 1];
            array[n - i - 1] = temp;
        }
        else
        {
            array[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("\n%d ", array[i]);
    }
}