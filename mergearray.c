#include<stdio.h>
void main(){

   int m = 5,n=5,j,temp=0;
    int array1[5] ={1,2,3,4,5};
    int array2[5] = {1,2,3,4,5};
    int c=m+n;
    int mergearray[c];

    int i =0;
    for( int j=0; i<m; i++,j++)
    {
        mergearray[i]=array1[j];
    }

    for(int j=0;i<c;i++)
    {
        mergearray[i]=array2[j];
        j++;
    }
    printf("After merging arrays:\n");
    for(int i=0;i<c;i++){
        printf("%d ",mergearray[i]);
    } 
    printf("\n"); 
    for(i=0;i<c/2;i++){
        if(mergearray[i]%2!=0 && mergearray[c-i-1]%2==0){
            temp=mergearray[i];
            mergearray[i]=mergearray[c-i-1];
            mergearray[c-i-1]=temp;
        }
        if(mergearray[i]%2!=0 && mergearray[c-i-1]%2!=0){
            temp=mergearray[i];
            mergearray[i]=mergearray[c-i-2];
            mergearray[c-i-2]=temp;            
        }
    
    } 
       for(int i=0;i<c;i++){
        printf("%d ",mergearray[i]);
    }  

}
   
