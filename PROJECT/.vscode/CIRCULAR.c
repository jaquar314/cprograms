

#include <stdio.h>
#define m 15

int f = 0, r = 0, a[m];
int isempty() { return f == r; }
int isfull() { return (r + 1) % m == f; }
void push(int e)
{
	r = (r + 1) % m;
	a[r] = e;
}
int delet()
{
	f = (f + 1) % m;
	return a[f];
}
void display()
{
	if (r > f)
	{
		for (int i = (f + 1) % m; i <= r; i++)
			printf("In Stack: %d\n", a[i]);
	}
	else
	{
		for (int i = (f + 1) % m; i < m - 1; i++)
			printf("In Stack: %d\n", a[i]);
		for (int i = 0; i <= r; i++)
			printf("In Stack: %d\n", a[i]);
	}
}

int main()
{
	int e, ch;
	printf("\n\t\t\t Circular Queue\n \t\t\t");
	printf("\n1.Add\n2.Delete\n3.Display\n4.Exit\n");

	while (1)
	{
		printf("\nEnter Your Choice: ");
		scanf("%d", &ch);
		if (ch == 4)
		{
			printf("Bye!!");
			return 0;
		}
		switch (ch)
		{
		case 1:
			if (isfull())
				printf("Queue is full!!!");
			else
			{
				printf("Enter a value: ");
				scanf("%d", &e);
				push(e);
				printf("Recently Added Value: %d", e);
			}
			break;
		case 2:
			if (isempty())
				printf("Queue is empty!!");
			else
			{
				printf("Deleted Value: %d", delet());
			}
			break;
		case 3:
			if (isempty())
				printf("Queue is empty!!");
			else
				display();
			break;
		default:
			printf("Invalid...");
			break;
		}
	}
}
