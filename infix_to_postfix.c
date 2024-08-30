#include<stdio.h>
#include<string.h>
#define MAX 20

typedef struct 
{
    int data[MAX];
    int top;
} stack;

void initstack(stack *s)
 {
    s->top = -1;
}

int isempty(stack *s)
 {
    return (s->top == -1);
}

int isfull(stack *s)
 {
    return (s->top == MAX - 1);
}

int push(stack *s, int value)
 {
    if (isfull(s)) {
        return 0; // Stack is full, cannot push
    } else {
        s->data[++s->top] = value;
        return 1; // Push successful
    }
}

int pop(stack *s)
 {
    if (isempty(s)) {
        return -1; // Stack is empty
    } else {
        return s->data[s->top--];
    }
}

int peek(stack *s)
 {
    if (isempty(s))
     {
        return -1; // Stack is empty
    } else
     {
        return s->data[s->top];
    }
}
int precedence(char op)
{
    switch (op)
    {
        case '^':
        case '$':return 3;
        case '*':
        case '/':
        case '%':return 2;
        case '+':
        case '-':return 1;
    }

}
int isoprator(char ch)
{
    return (precedence(ch)!=0);
}
void infixToPostfix(char infix[],char postfix[])
{
    stack s;
    initstack(&s);
    char current;
    int i,j=0;
    for(i=0;infix[i]='\0';i++)
    {
        current =infix[i];
        if(current>='A' && current<='Z');
        postfix[j++]=current;
        if(current=='(')
        push(&s,current);
        else
        if(current==')')
         {
            while(!(isempty(&s)&&(peek(&s)!='(')))
            {
                postfix[j++]=pop(&s);

            }
            pop(&s);
         }
         else 
         if(isoprator(current))
         {
            while(!(isempty(&s)&&precedence(peek(&s))>=precedence(current)))
            {
                postfix[j++]=pop(&s);
            }
            push(&s,current);
        }
    }
    while(!isempty(&s))
    {
        postfix[j++]=pop(&s);
    }
    postfix[j]='\0';
}
void main()
{
    char infix[MAX];
    char postfix[MAX];

    printf("Enter an infix expression:");
    scanf("%s",&infix);
    infixToPostfix(infix,postfix);
    printf("Infix expression:%s\nPostfix expression:%s\n",infix,postfix);
}