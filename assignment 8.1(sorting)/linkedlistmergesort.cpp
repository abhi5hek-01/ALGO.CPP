#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};
Node* SortedMerge(Node* a,Node* b);
void mid(Node* curr,Node** front,Node** back);
void MergeSort(Node** headRef)
{
	Node* head = *headRef;
	Node* a;
	Node* b;
	if ((head == NULL) ||(head->next == NULL))
	{
		return;
	}
	mid(head, &a, &b);
	MergeSort(&a);
	MergeSort(&b);
	*headRef = SortedMerge(a, b);
}
Node* SortedMerge(Node* a, Node* b)
{
	Node* result = NULL;
	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);
	if (a->data <= b->data)
	{
		result = a;
		result->next =
				SortedMerge(a->next, b);
	}
	else
	{
		result = b;
		result->next =
				SortedMerge(a, b->next);
	}
	return (result);
}

void mid(Node* curr,Node** front,Node** back)
{
	Node* fast;
	Node* slow;
	slow = curr;
	fast = curr->next;
	while (fast != NULL)
	{
		fast = fast->next;
		if (fast != NULL)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	*front = curr;
	*back = slow->next;
	slow->next = NULL;
}
void printList(Node* node)
{
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}
void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

int main()
{
	Node* res = NULL;
	Node* a = NULL;
	push(&a, 5);
	push(&a, 1);
	push(&a, 4);
	push(&a, 2);
	push(&a, 3);

	MergeSort(&a);

	cout << "Sorted Linked List is: ";
	printList(a);

	return 0;
}
