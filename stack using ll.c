#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *push(struct node *ptr, int ele)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = ele;
    n->next = ptr->next;
    ptr->next = n;
    return ptr;
}
struct node *pop(struct node *ptr)
{
    if (ptr == NULL)
    {
        printf("underflow\n");
    }
    else
    {
        if (ptr->data == 0)
        {
            ptr = ptr->next;
        }
            struct node *q;
            q = ptr;
            ptr = ptr->next;
            // struct node *  x;
            // x->data=q->data;
            printf("%d\n", q->data);
            free(q);
            return ptr;
    }
}
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        if (ptr->data == 0)
        {
            ptr = ptr->next;
            printf("%d\n", ptr->data);
        }
        else
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}
void peek(struct node *ptr)
{
    if (ptr->data == 0)
    {
        ptr = ptr->next;
        printf("%d\n", ptr->data);
    }
    else
    {
        printf("%d\n", ptr->data);
    }
}

int main()
{
    struct node *top;
    top = (struct node *)malloc(sizeof(struct node));
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
            top = push(top, value);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            peek(top);
            break;
        case 4:
            display(top);
            break;
        case 5:
            exit(1);
            break;
        case 6:
            printf("%d\t%d\n", top->data, top->next);
        }
    }
}
