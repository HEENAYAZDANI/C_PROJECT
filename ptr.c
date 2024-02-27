#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Declaring the variable for size of the array.
    int size;
    printf("Enter the size of the array :");
    scanf("%d", &size);

    // Creating an array with the given size.
    int array[size];
    printf("Enter the elements of the aray:");

    // Taking User inputs for the element of the array.
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    /*Initializing 4 variables
    Sum_Of_Even, Sum_Of_Odd, CountOdd, CountEven*/
    int Sum_Of_Even = 0, Sum_of_Odd = 0, Count_Odd = 0, Count_Even = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            // if the number is divisble by 2 then adding the in the Sum_Of_Even and increasing the count of Count_Even
            Sum_Of_Even += array[i];
            Count_Even += 1;
        }
        else
        {
            // if the number is not divisble by 2 then adding the in the Sum_Of_Odd and increasing the count of Count_Odd
            Sum_of_Odd += array[i];
            Count_Odd += 1;
        }
    }
    printf("\x1b[31mthe sum of...\x1b[0m");
    printf(
        "\nOdd Numbers = %d\nEven Numbers = %d\n",
        Sum_of_Odd,
        Sum_Of_Even);

    printf("\x1b[31mThe total numbers of...\x1b[0m");
    printf("\nOdd = %d\nEven = %d",
           Count_Odd,
           Count_Even);

    return 0;
}