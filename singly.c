#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void beginsert() 
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    
printf("\nEnter value\n");
scanf("%d", &ptr->data);
ptr->next = head;
head = ptr;
printf("\nNode inserted");
}
void lastinsert() 
{
    struct node *ptr, *temp;
   ptr = (struct node *)malloc(sizeof(struct node));
printf("\nEnter value?\n");
scanf("%d", &ptr->data);
if (head == NULL)
{
    ptr->next = NULL;
    head = ptr;
    printf("\nNode inserted");
}
else
{
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = NULL;
    printf("\nNode inserted");
}
}
void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
printf("\nList is empty\n");
    }
    else
    {
ptr = head;
head = ptr->next;
free(ptr);
printf("\nNode deleted from the begining ...\n");
    }
}
void last_delete() // function definition
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
printf("\nlist is empty");
    }
    else if (head->next == NULL)
    {
head = NULL;
free(head);
printf("\nOnly node of the list deleted ...\n");
    }
    else
    {
ptr = head;
while (ptr->next != NULL)
{
    ptr1 = ptr;
    ptr = ptr->next;
}
ptr1->next = NULL;
free(ptr);
printf("\nDeleted Node from the last ...\n");
    }
}
void search() 
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
printf("\nEmpty List\n");
    }
    else
    {
printf("\nEnter item which you want to search?\n");
scanf("%d", &item);
while (ptr != NULL)
{
    if (ptr->data == item)
    {
        printf("item found at location %d ", i + 1);
        flag = 0;
    }
    else
    {
        flag = 1;
    }
    i++;
    ptr = ptr->next;
}
if (flag == 1)
{
    printf("Item not found\n");
}
    }
}
void display() // function definition
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
printf("Nothing to print");
    }
    else
    {
printf("\nprinting values . . . . .\n");
while (ptr != NULL)
{
    printf("\n%d", ptr->data);
    ptr = ptr->next;
}
    }
}

void main() 
{
    int choice = 0;
    while (choice != 7)
    {
printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search for an element\n6.Display\n7.Exit\n");
printf("\nEnter your choice?\n");
scanf("\n%d",&choice);
switch(choice)
{
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            begin_delete();
            break;
        case 4:
            last_delete();
            break;
        case 5:
            search();
            break;
        case 6:
            display();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
}
    }
}
