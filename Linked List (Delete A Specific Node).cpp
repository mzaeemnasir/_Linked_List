
// Delete A Specific Node 

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
	// Deleting From the Head of the linked List 

	void Delete()
	{
		if (head == NULL)
		{
			cout << "Linked List is Empty" << endl;
		}

		else
		{
			node* temp=head;
			head = head->next;
			cout << "Element " << temp->data << " has been Deleted" << endl;
			delete temp;
		}

	}

	void Delete_Node(int data)
	{
		if (head == NULL)
		{
			cout << "Linked List is Empty" << endl;
		}
		else
		{
			node* temp = head;
			while (temp->next != NULL)
			{

				if (temp->next->data == data)
				{
					if (temp->next->next == NULL)
					{
						temp->next = NULL;
						return;
					}
					else
					{
						temp->next = temp->next->next;
						return;
					}
				}
				temp = temp->next;
			}

		}
		cout << "No Node Found" << endl;
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
	Linked_List LL;
	LL.insert(1);
	LL.insert(2);
	LL.insert(3);
	LL.insert(4);
	LL.insert(5);
	LL.insert(6);
	LL.insert(7);
	LL.insert(8);
	LL.Delete_Node(4);
	LL.Delete_Node(3);
	LL.display();
	system("PAUSE");
	return 0;
}