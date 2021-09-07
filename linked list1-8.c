
#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node *next;
	
	
};
struct node *head = NULL;
struct node *tail = NULL;

int count1()
{
	int count=0;
	node *temp=head;
	while(temp!=NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

void create(int n)
{
	struct node *ptr = (node*) malloc(sizeof(node));
	ptr->data = n;
	ptr->next= NULL;
	
	if(head == NULL)
	{
		head= ptr;
		tail = ptr;
		
	}
	else
	{
		tail->next = ptr;
		tail=ptr;
	}
	
}
void display()
{
	
	if(head== NULL)
	{
		printf("empty list\n");
	}
	else
	{ 
	  struct  node *temp=head;
	   while(temp!=NULL)
	   {
		   printf("%d\n",temp->data);
		   
		   temp = temp->next;   
	   }
	}
}
void insert_front(int x)
{
		node *ptr = (node*) malloc(sizeof(node));
		ptr->data = x;
		ptr->next = head;
		head = ptr;
}
void insert_middle(int y)
{
		struct node *ptr = (node*) malloc(sizeof(node));
		ptr->data = y;
		ptr->next = NULL;
		
		int key = 20;
		node *temp = head;
		while(temp->data!=key)
		{
			temp = temp->next;
		}
		ptr->next = temp->next;
		temp->next = ptr;
}


void insert_end(int z)
{
	struct node*t3=(struct node*) malloc(sizeof(node));
	t3->data=z;
	t3->next=NULL;
	struct node*temp1=head;
	while(temp1->next!=NULL)
		{
			temp1 = temp1->next;
		}
		  temp1->next=t3;
	
	
	
}

  void  delete_front()
{
	struct node*newNode=head;
	head=head->next;
	free(newNode);
}
void delete_middle()
{
	int key=25;
	node *t1,*t2;
	t1=head;
	while(t1->data!=key)
	{
		t2=t1;
		t1=t1->next;
	}
	t2->next = t1->next;
	free(t1);
}
void delete_last()
{
	struct node *t1= head;
	while(t1->next!=tail)
	{
		t1 = t1->next;
		
	}
	t1->next = NULL;
	free(tail);
	tail=t1;
	
	
}
void distroy_all()
	{
		struct node*store;
		struct node*ptr=tail;
		while(tail!=NULL)
		
		{
			store=ptr;
			free(ptr);
			tail=store;
		}
		printf("elements distroy");
	}




int main()

{
	
	display();
	create(10);
	create(20);
	create(30);
	create(40);
	create(50);
	create(60);
	create(70);
	insert_front(5);
	printf(" insert at first\n");
		display();
	insert_middle(25);
	printf(" insert at middle\n");
		display();
	printf("\n");
		insert_end(67);
		printf(" insert at end\n");
	display();
	printf("\n");
	int count;
count= count1();
	printf("count = %d\n",count);
		display();
	delete_front();
	printf("after delete front\n");
	display();
	printf("\n");
	
	
	delete_middle();
	printf("after delete at middle\n");
	display();
	printf("\n");
	
	delete_last();
	printf("after delete last\n");
	display();
	printf("\n");
	distroy_all();
	
}
