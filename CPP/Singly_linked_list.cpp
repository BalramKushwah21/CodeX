#include<iosteeam>>
using namespace std;

// Node structure
class Node
{
	public:
		int data;
		Node* next;
		
		Node(int val)
		{
			data = val;
			next = NULL; // Chnaged nullptr to NULL
		}
};

// Linked List class
class LinkedList
{
	private:
		Node* head;
	public:
		// Constructor
		LinkedLidt()
		{
			head = NULL;
		}
		
		// Insert at the beginning
		
		void insertAtBeginning(int val)
		{
			Node* newNode = new Node(val);// step 1 : create a new node with the value
			newNode->next = head; // step 2 : Point new node's next to the current head
			head = newNode; // Step 3: Update head to the new node
		}
		
		// Insert at the end
		void insertAtEnd(int val)
		{
			Node* newNode = new Node(val); // Step1: Create a new node with the value
			if(!head) // Step2 : if the list is empty
			{
				head = newNode; //  Make this node the head
				return;// Done
			}
			Node* temp = head; // Step3 : Start from the heat
			while(temp->next) // Step4 : Transverse to the last node
			{
				temp = temp->next;
			}
		}
}
