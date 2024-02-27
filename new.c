#include <stdio.h>
int main()
{
    int n, maxcount = 0;
   
    printf("enter the size of array :\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element  :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\t", &arr[i]);                 //frequency of array
    }                                           //[1,1,1,3,4,5,3]
    for (int i = 0; i < n; i++)                //[ 1-->3 times ]
         {
          int count = 0;
                    for (int j = 0; j < n; j++)
                    {
                     if (arr[i] == arr[j])
                        {
                count++;
                       }
         }
         if (count > maxcount)
                 {
                     maxcount = count;
                 }
    }
                     printf("the maximum number of the array %d", maxcount);
}