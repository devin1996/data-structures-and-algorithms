#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={7,2,4,5,3};
    int i,n=5,c,d,t;

    i_sort(arr, n);


     printf("Sorted list in ascending order:\n");

  for (c = 0; c<n; c++) {
    printf("%d\n", arr[c]);
  }

  return 0;

}

void i_sort(int arr[],int n){

    int i,d,t;

    for(i=1;i<n-1;i++){
            d=i;
        while(d>0 && arr[d-1]>arr[d])
    {
      t = arr[d];
      arr[d]   = arr[d-1];
      arr[d-1] = t;

      d--;
    }

    }

    }

