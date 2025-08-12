#include<stdio.h>
#include<stdlib.h>
//this is a header file i created to use in the program
typedef struct slinkedlist
{
	int data;
	struct slinkedlist *next;
} Node;

Node* CreateNode();
Node* Createlist();
