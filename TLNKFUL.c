#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
                                                                                                    /* Implementation of singly linked list */
struct node {int info; struct node *next;} *head;
void makeempty()  
{ struct node *p;
  while(head!=NULL) { p=head; head=head->next; free(p);}
}

struct node* create(int x)
{ struct node *p=(struct node*) malloc(sizeof(struct node));
  if(p==NULL) { printf("\nNot enough memory for allocation!");makeempty();exit(1);}
  p->info=x;
  p->next=NULL;
  return p;
}

void display()

{  struct node *p=head;
   while(p!=NULL) { printf("%d ",p->info); p=p->next;}
}
void insbeg(int x)
{  struct node *p=create(x);
   p->next=head;
   head=p;
}

void insend(int x)
{  struct node *w=create(x),*p=head;
   if(p==NULL)  head=w;
    else
    { while(p->next!=NULL)  {  p=p->next; }
      p->next=w;
    }
}

int delbeg()
{  struct node *p=head;
   int x=p->info;
   head=head->next;
   free(p);
   return x;
}
int delend()
{  struct node *p=head,*q,*r;
   int x;
    if(p->next==NULL) { x=p->info;
			head=NULL;
			free(p);
		      }
    else   { while(p!=NULL) { r=q;
			      q=p;
			      p=p->next;
			    }
			   r->next=NULL;
			   x=q->info;
			   free(q);
	    }
   return x;
}

void reverse()
{ struct node *p=head,*q=NULL,*r;
  while(p!=NULL)
  { r=q;
    q=p;
    p=p->next;
    q->next=r;
  }
  head=q;
}
void insert(int x, int y)
{ struct node *p=head,*q=create(x);
  int i;
  if(y==1) {q->next=head; head=q;}
  else
  { for(i=1;i<y-1&&p!=NULL;i++) p=p->next;
    if(p==NULL) {printf("\nvoid insertion!");free(q);}
    else { q->next=p->next;
	    p->next=q;
	 }
  }
}
void del(int y)
{ struct node *p=head,*q;
  int i;
  if(y==1) {head=head->next;free(p);}
  else
  { for(i=1;i<y-1&&p!=NULL;i++) p=p->next;
    if(p==NULL) {printf("\nvoid deletion!");}
    else {  q=p->next;
	    p->next=q->next;
	    free(q);
	 }
  }
}

int search(int x)
{  struct node *p=head;
   int i=0,flag=0;
   while(flag==0&&p!=NULL) { i++;
			     if(p->info==x) flag=i; else p=p->next;
			    }
   return flag;
}


void main()
{  int x,ch,p;
   head=NULL;
   while(1)
   { 
     printf("\n1. Insertion at begining\n2. Insertion at end \
     \n3. Delete at the begining\n4. Delete at the end					\
     \n5. Display\n6. Reverse\n7. Insert\n8. Delete \n9. Search \
     \n10. Make Empty Linked list\n11. Exit \
     \n\nEnter your choice: ");scanf("%d",&ch);
     if(ch==11) break;
     switch(ch)
     {  case 1: printf("\nEnter information: ");scanf("%d",&x);
		insbeg(x); break;
	case 2: printf("\nEnter information: ");scanf("%d",&x);
		insend(x); break;
	case 3: if(head==NULL) printf("\nEmpty list!");
		else printf("\nDeleted node = %d",delbeg()); break;
	case 4: if(head==NULL) printf("\nEmpty list!");
		else printf("\nDeleted node = %d",delend()); break;
	case 5: if(head==NULL) printf("\nEmpty list!");
		else { printf("\nInformation of the linked list\n");
		       display(); } break;
	case 6: if(head==NULL) printf("\nEmpty list!");
		else {reverse(); printf("\nNow list is reversed");} break;

	case 7:printf("\nEnter element and position of insertion: ");
		scanf("%d%d",&x,&p);
		insert(x,p);
		break;
	case 8: printf("\nEnter position of element to delete: ");
		scanf("%d",&p);
		del(p);
		break;
	case 9: printf("\nEnter search element: ");
		scanf("%d",&x);
		p=search(x);
		if(p==0) printf("\nElement %d not found!",x);
		else printf("\nElement found at position %d",p);
		break;
	case 10: if(head!=NULL) makeempty();
		 printf("\nNow linked list is empty!"); break;
	default: printf("\nImproper choice! Try again.");
     }
      getch();
   } /* end of while */
}  /* end of main */
