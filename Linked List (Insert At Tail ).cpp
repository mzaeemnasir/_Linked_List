
//Inserting Element (DATA) At the TAIL of the Linked List


#include<iostream>
using namespace std;

struct node {
	int data;
	node* next; //This node will store the Address of the Next Node 

};

// Class of the Linked List 

class Linked_List {
private:

	node* head = NULL;
	node* tail = NULL;

public:
	void insert(int data)
	{
		// Creating A Node 
		node* newNode = new node;
		newNode->data = data;
		newNode->next = NULL;

		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			node* temp;
			tail = newNode;
			temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newNode;
		}

	}

	void display()
	{
		node* temp = head; // creating a temp node of Head
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}



};

int main()
{
	cout << "\t\tInserting Data At the TAIL of the Linked List \n\n";
	Linked_List LL;
	LL.insert(1);
	LL.insert(0);
	LL.insert(9);
	LL.insert(6);
	LL.insert(5);
	LL.insert(3);
	LL.display();

	system("PAUSE");
	return 0;
}
