#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=0;
void push(int ele)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = ele;
    n->next = n;
    top=n;
}
void pop()
{
    struct node *temp;
    temp=top;
    if (top == NULL)
        printf("underflow\n");
    else
        top = top->next;
        printf("elelment deleted is %d\n", top->data);
        free(temp);
}
void display()
{
    struct node *temp;
    temp=top;
    if (top == 0)
        printf("stack is empty\n");
    else
    {
        while(temp!=0)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
void peek()
{
    if (top == 0)
        printf("stack is empty\n");
    printf("top element is %d\n", top->data);
}

int main()
{
    int value, ch;
    while (1)
    {
        printf("1.push\t2.pop\t3.top\t4.display\t5.exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the value \n");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default: printf("enter valid choice\n");
        }
    }
}
