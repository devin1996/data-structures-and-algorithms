#include <stdio.h>
#include <stdlib.h>

int main()
{
        int array[5] = {19, 10, 8, 17, 1};
        int temp,i,j,c,n;
        n=5;
        b_sort(array, n);

      printf("Sorted list in ascending order:\n");

  for (c = 0; c < 5; c++)
     printf("%d\n", array[c]);

}


void b_sort(int arr[],int n){

    int i,j,temp;

   for(i=0;i<n-1 ;i++){
            for(j=0;j<n-1-i;j++){
    if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;

            }
        }
    }

}
