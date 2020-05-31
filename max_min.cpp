
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};


int largestElement(struct Node* head)
{

	int max = INT_MIN;

	while (head != NULL) {

		if (max < head->data)
			max = head->data;
		head = head->next;
	}
	return max;
}


int smallestElement(struct Node* head)
{

	int min = INT_MAX;

	while (head != NULL) {

		if (min > head->data)
			min = head->data;

		head = head->next;
	}
	return min;
}

void push(struct Node** head, int data)
{
	struct Node* newNode =
    (struct Node*)malloc(sizeof(struct Node));

	newNode->data = data;

	newNode->next = (*head);

	(*head) = newNode;
}

void printList(struct Node* head)
{
	while (head != NULL) {
		printf("%d -> ", head->data);
		head = head->next;
	}
	cout << "NULL" << endl;
}

int main()
{
	struct Node* head = NULL;

	push(&head, 15);
	push(&head, 14);
	push(&head, 13);
	push(&head, 22);
	push(&head, 17);
	cout << "Linked list is : " << endl;

	printList(head);
	cout << "Maximum element in linked list:";
	cout << largestElement(head) << endl;
	cout << "Minimum element in linked list:";
	cout << smallestElement(head) << endl;

	return 0;
}
