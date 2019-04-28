#include <iostream>

using namespace std;
struct Node {
	int data;
	Node* next;
};

// only for the 1st Node
void initNode(struct Node *head,int n){
	head->data = n;
	head->next =NULL;
}
void addNode(struct Node *head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}
void display(struct Node *head) {
	Node *list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}
int main() 
{
	struct Node *newHead;
	struct Node *head = new Node;
int x;	
	cout<<"Enter data";
		cin>>x;
		initNode(head,x);

	display(head);
	
	
	cin>>x;addNode(head,x);
	display(head);
return 0;
}
