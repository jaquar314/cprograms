#include <stdio.h>
#include <stdlib.h>
struct node
{
    int d;
    struct node *l;
};
typedef struct node nd;
nd *top;
int isEmpty()
{
    return top == NULL;
}
void push(int e)
{
    nd *p = (nd *)malloc(sizeof(nd));
    p->d = e;
    p->l = top;
    top = p;
}
int pop()
{
    nd *p = top;
    int e = p->d;
    top = p->l;
    free(p);
    return e;
}
void display()

{
    nd *p = top;
    while (p)
    {
        printf("%d\n", p->d);
        p = p->l;
    }
}
int main()
{
    int ch, e;
    printf("\n\t\tStack Implentation");
    printf("\n1.Add\n2.Delete\n3.Display\n4.Exit");
    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        if (ch == 4)
        {
            printf("\nExited\n");
            return 0;
        }
        switch (ch)
        {
        case 1:
            printf("\nEnter a number: ");
            scanf("%d", &e);
            push(e);
            printf("\n%d Element pushed succesfully\n", e);
            break;
        case 2:
            if (isEmpty())
                printf("\nstack is empty");
            else
                printf("\npopped element is: %d\n", pop());
            break;
        case 3:
            if (isEmpty())
                printf("Stack is empty");
            else
                display();
            break;
        default:
            printf("error");
        }
    }
}
