#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* head;

void Insert(int x);
void Print();

void Insert(int x){

	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = head;
	head = temp; 
}

void Print(){

	struct node* temp = head;
	printf("List is: ");
	while(temp != NULL){
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");

}


int main(void){

	int n, i, x;

	head = NULL;

	printf("How many values would you like to enter into the linked list?\n");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		printf("Please enter a data value\n");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
		

	return 0;
}
