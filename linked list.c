#include <stdio.h>
#include <stdlib.h>
#define Null 0
int main() {
	int i,n;
	printf("enter the no. of nodes in the linked list\n");
	scanf("%d",&n);
	struct Node{
		int data;
		struct Node *next;
	};
	struct Node *newnode,*head,*temp;
	head=Null;
	temp=head;
	for(i=0;i<n;i++){
		newnode=(struct Node*)malloc(sizeof(struct Node));
		printf("enter the data values inside the node\n");
		scanf("%d",&newnode->data);
		if(head=Null){
			head=temp=newnode->next;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
	}
	temp->next=Null;
	temp=head;
	
	
	return 0;
}
