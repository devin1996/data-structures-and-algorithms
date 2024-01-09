#include <stdio.h>
int main()
{
    int pwr,base,c,answer;

    printf("Enter an Base ");
    scanf("%d", &base);

    printf("Enter an Power ");
    scanf("%d", &pwr);


    while(c<=pwr)
    {

        answer = answer*c;
        c++;

    }

    printf(" nth power of a given integer %d",base);

    return 0;
}
