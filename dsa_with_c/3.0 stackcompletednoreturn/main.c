#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 5

    int top= -1;
    // if we get top as 0 it will be assigned to 0th index
    int stack[CAPACITY];


void main()
{
    int ch,no;

    while(1){
        printf("1.push \n");
        printf("2.pop \n");
        printf("3.peek \n");
        printf("4.Traverse \n");
        printf("5.isFull \n");
        printf("6.isEmpty \n");
        printf("7.Quit \n");

        printf("Enter Your Choice---->");
        scanf("%d",&ch);


        switch(ch)
        {
        case 1:printf("Enter Element to push--->");
                scanf("%d",&no);
                push(no);break;
        case 2:pop();break;
        case 3:peek();break;
        case 4:traverse();break;
        case 5:isFull();break;
        case 6:isEmpty();break;


        default:printf("Invalid input\n");
        }
}

}

void push(int ele)
{
    if(top==CAPACITY-1)
    {
        printf("Stack is full...!\n");
    }
    else
        {
            top++;
            //first top value must incresed to 0 bcos its in 1
            stack[top]=ele;
            printf("%d pushed in to the element\n",ele);

        }
    }



 int pop()
{
    int ele;
    if (top==-1)
    {
        printf("stack is empty");
    //if the stack is empty
    }

    else
        {
            ele = stack[top];
            top--;
            printf("The popped element is %d\n",ele);
        }
        return top;
}


int peek()

{
    int ele;
    if(top== -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        ele = stack[top];
        printf("The %d is the peek value\n",ele);
    }
    return top;

    }


void traverse()
{
    int i;
    if(top== -1)
    {
        printf("No elements\n");
    }
    else
        {
            printf("Stack elements are: \n");
            for(i=0;i<=top;i++)
            {
                printf("%d \n",stack[i]);
            }
        }
    }


int isFull()
{
    if(top==CAPACITY-1)
    {
        printf("Stack is Full\n");

    }
    else
    {
        printf("Stack is not Filled yet\n");
    }
}


int isEmpty()
{
    if(top== -1)
    {
        printf("Stack is not Filled yet\n");


    }
    else
    {
        printf("Stack is Full\n");
    }
}



