#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],sk,c,n;

     printf("Enter the no of elements in the array\n");
     scanf("%d",&n);

       printf("Enter %d Elements Please",n);
       for(c=0;c<n;c++)
       {
            scanf("%d",&arr[c]);
       }

    printf("Please enter the search key");
    scanf("%d",&sk);


            for(c=0;c<n;c++){
                if(arr[c]==sk){
                printf("Search key is allocated at the %d index",c);
                break;
                }
            }
    if(c==n){
        printf("%d is not present in this array\n",sk);
}

    return 0;
}
