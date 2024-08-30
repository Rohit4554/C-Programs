#include<stdio.h>
#define MAX 10
typedef struct
{
    int data [MAX];
    int front,rear;
}queue;
void init(queue *q)
{
    q->front = -1;
    q->rear = -1;
}
void add(queue *q,int num)
{
    q->data[++q->rear]=num;
}
int delete(queue *q)
{
    if(q->front==0)
    return q->data[q->front++]; 
    else
        return q->data[++q->front];

}
int peek(queue *q)
{
    return (q->data[q->front+1]);
}
int isempty(queue *q)
{
    return(q->front==q->rear);
}
int isfull(queue *q)
{
    return (q->rear==MAX-1);
}

void main()
{
    int num,choice;
    queue q;
    init(&q);
    do{
        printf("\n1:Add\n2:Delete\n3:Peek\n4:Exit\n");
         printf("Enter your choice:");
         scanf("%d",&choice);

         switch(choice)
            {
             case 1:if(isfull(&q))
                    printf("\nQueue is Full:");
                    else
                    {
                    printf("\nEnter the element:");
                    scanf("%d",&num);
                    add(&q,num);
                    }
                    break;
             case 2:if(isempty(&q))
                     printf("\nQueue is empty:");
                     else
                         printf("\n%d is deleted:",delete(&q));
                     break;
            case 3:if(isempty(&q))
                   printf("\nQueue is underflow:");
                   else
                     printf("\nFront is %d",peek(&q));
                   break;
    }
 }  while(choice != 4);
}
