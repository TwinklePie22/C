// Implementation of queue

#include <stdio.h>
#include <stdlib.h>
#define qs 5
int front = -1, rear = -1, queue[qs];
int isEmpty()
    {
        if (front == -1 && rear == -1)
            return 1;
        else
            return 0;
    }
int isFull()
    {
        if (rear == qs - 1)
            return 1;
        else
            return 0;
    }
void enqueue(int ele)
    {
        if (isFull())
            printf("Overflow\n");
        else if (isEmpty())
            {
                front = 0;
                rear = 0;
                queue[rear] = ele;
                printf("Element enqueued is %d\n", queue[rear]);
            }
        else
            {
                rear++;
                queue[rear] = ele;
                printf("Element enqueued is %d\n", queue[rear]);
            }
    }
void dequeue()
    {
        if (isEmpty())
            printf("Underflow Condition\n");
        else if (front == rear)
            {
                printf("Element deleted is %d\n", queue[front]);
                front = -1;
                rear = -1;
            }
        else
            {
                int ele = queue[front];
                front++;
                printf("Element deleted is %d\n", ele);
            } 
    }
void peek()
    {
        if (isEmpty())
            printf("Peek operation cannot be performed\n");
        else
        {
            printf("Peek element is %d\n", queue[front]);
        }
    }
void display()
    {
        int i;
        if (isEmpty())
            printf("No element to display\n");
        else
           {
            printf("Elements are:\n");
            for (i = front; i <= rear; i++)
                {
                    printf("%d\n", queue[i]);
                }
            }
    }
void main()
    {
        int choice, n;
        printf("1-Enqueue 2-Dequeue 3-Peek 4-Display 5-Exit\n");
        while (1)
            {
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice)
                    {
                        case 1:
                            printf("Enter the element to be inserted: ");
                            scanf("%d", &n);
                            enqueue(n);
                            break;
                        case 2:
                            dequeue();
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
                        default:
                            printf("Wrong Choice\n");
                            break;    
                    }
            }
    }
