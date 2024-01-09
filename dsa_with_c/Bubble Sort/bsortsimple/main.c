#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[5] = {19, 10, 8, 17, 1};
    int temp,i,j,c,n;
    n=5;
    for(i=0;i<n-1 ;i++){
            for(j=0;j<n-1-i;j++){
    if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;

            }
        }
    }

      printf("Sorted list in ascending order:\n");

  for (c = 0; c < 5; c++)
     printf("%d\n", arr[c]);
}
