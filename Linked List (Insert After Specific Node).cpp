
// Inserting Node after the specific node 

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

	void insert_after(int insert_after, int data)
	{
		// Creating A Node 
		node* newNode = new node;
		newNode->data = data;
		newNode->next = NULL;
		
		node* temp = head;
		while (temp!=NULL)
		{
			if (insert_after == temp->data)
			{
				if (temp->next != NULL)
				{
					newNode->next = temp->next;
					temp->next = newNode;
					return;
				}
				else
				{
					temp->next = newNode;
					return;
				}
			}
			temp = temp->next;
		}
		cout << "No data Found in the Node" << endl;

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
	int data;
	Linked_List LL;
	LL.insert(1);
	LL.insert(2);
	LL.insert(3);
	LL.insert(4);
	LL.insert(6);

	// Inserting new Data After the Node 4

	LL.insert_after(4, 5);
	LL.display();

	system("PAUSE");
	return 0;
}