#include <stdio.h>

int main()
{
   int first, last, middle,search,no,a;
   int array[100];

    printf("Enter the  no of elements");
    scanf("%d",&no);

    printf("Enter the elements to the array");
    for (a= 0; a< no; a++){
        scanf("%d",&array[a]);

    }

    printf("Enter value to find\n");
   scanf("%d",&search);


      for (a = 0; a < 9; a++)
	{


   first = 0;
   last = 10;
   middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);

   return 0;
}

}
