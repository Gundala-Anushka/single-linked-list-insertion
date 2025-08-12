//To insert elements at beginning,end and at any position of a single linked list
#include<stdio.h>
#include<stdlib.h>
#include"Linklist.h"

Node *head=NULL;

void InsertAtBeginning()
{
	
	Node *newnode=CreateNode();
	if(head==NULL)
		head=newnode;
	else
	{
		newnode->next=head;
		head=newnode;
	}
}
void InsertAtEnd()
{
	Node *newnode,*temp;
	newnode=CreateNode();
	temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=newnode;
}
void InsertAtAny(int pos)
{
	int nctr=CountNodes(head);
	if(pos>1 && pos<nctr)
	{
		Node *newnode=CreateNode();
		Node *prev, *temp;
		prev=temp=head;
		int count=1;
		while(count<pos)
		{
			prev=temp;
			temp=temp->next;
			count++;
		}
		prev->next=newnode;
		newnode->next=temp;
	}
	else
		printf("Invalid Position\n");
}		
int main()
{
    int choice, pos;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                InsertAtBeginning();
                break;
            case 2:
                InsertAtEnd();
                break;
            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);
                InsertAtAny(pos);
                break;
            case 4:
                Traverse(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
	
