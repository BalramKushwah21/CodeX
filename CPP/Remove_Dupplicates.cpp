/*
Q 1 - Remove duplicates from sorted list :-

You are given head of the non-empty sorted linked list where the value of the ith node will be Ai.
Your task is to delete all duplicates such that each element appears only once and return the linked list.

Input-
first input contain t test cases.
second line of input contain n
third line contain element of linked list.

Sample input             output
3                        168
5                        12345
11688                    5
5
12345
4
5555
*/


#include<iostream>
using namespace std;
// Define a structure for a node in the linked list 
struct Node {
	int data;
	Node* next;
	
	// Constructor to initialize node
	Node(int x){
		data = x;
		next =NULL;
	}
};

// function to remove duplicates from a sorted linked list 
Node* removeDuplicates(Node* head)
{
	if(head==NULL)
	{
		return NULL;a
	}
	Node* current =head;
	
	// Traverse the list
	while(current !=NULL && current->next !=NULL)
	{
		// if current and next have the same data remove the next node
		if(current->data == current->next->data)
		{
			Node* temp = current->next;
			current->next =  current->next->next;
			delete temp;
		}
		else
		{
			current = current->next;
		}

	}
	return head;
}

// Function to build linked list from array.

Node* buildList(int arr[],int n)
{
	if (n==Q)
}
