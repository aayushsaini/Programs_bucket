#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *top;

void initialize()
{
    top = NULL;
}

void push()
{
    int value;
    scanf("%d",&value);
    node *tmp;
    tmp = malloc(sizeof(node));
    tmp -> data = value;
    tmp -> next = top;
    top = tmp;
}

int pop()
{
    node *tmp;
    int n;
    if(top == NULL ){
        printf("\nUnderflow\n");
        return 0;
    }
    tmp = top;
    n = tmp->data;
    top = top->next;
    free(tmp);
    return n;
}

int Top()
{
    return top->data;
}

int isempty()
{
    return top==NULL;
}

void display(node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d->", head -> data);
        display(head->next);
    }
}

int main()
{
    initialize();
    int ch=1;
    while(ch!=0){
        printf( "\nSelect:\n1. Push\n2. Pop\n3. Display\n-> ");
        scanf("%d", &ch);
        if (ch == 1) {
            push();
        } else if ( ch == 2 ) {
            pop();
        } else if ( ch == 3 ) {
            display(top);
        }
        else {
            printf("\nRetry! Invalid option");
        }
    }
    return 0;
}