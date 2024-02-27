#include<stdio.h>
void main (){
    int n,temp=0;
    printf("Enter the array of size :");
    scanf("%d",&n);
    int arr[n];
    //taking element of array
     printf("Enter the array of element :");
     for(int i=0 ;i<n ;i ++){
        scanf("%d",&arr[i]);
     }
     //original array                                 //[2,3,4,5]
     for(int i=0 ;i<n ;i ++){                        // [5,4,3,2]
        printf("%d\t",arr[i]);
     }
     //reversing array logic
    for (int i=0 ;i<n/2 ;i++){
                temp=arr[i];
                arr[i]=arr[n-i-1];
                arr[n-i-1]=temp;
        }                                                    
    //print reversing array
     for(int i=0 ;i<n ; i++){
                printf("\n%d\t ",arr[i]);
     }
}
