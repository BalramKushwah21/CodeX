//Task 

//Max = 50
//element store = 10 .   push
//display
//remove = 3
//display
#include<iostream>
using namespace std;
 
 class Queue{
 	private:
 		static const int SIZE = 100;
 		int arr[SIZE];
 		int frontIndex;
 		int rearIndex;
	public:
		Queue(){
		frontIndex=-1;
		rearIndex=-1;
	}

void enqueue(int item){
	if(rearIndex==SIZE-1){
		cout<<"Queue is Full"<<endl;
		return;
	}
    if(frontIndex==-1)frontIndex=0;
    rearIndex++;
    arr[rearIndex]=item; 
    cout<<"Enqueued : "<<item<<endl;
}
	bool is_emptyt(){
		if(frontIndex==-1 && rearIndex==-1){
			return true;
		}
		else{
			return false;
		}
	}

int dequeue(){
	if(is_emptyt()){
		cout<<"Queue is empty"<<endl;
		return -1;
	}
	int item=arr[frontIndex];
	frontIndex++ ;
	return item;
	}
	
	int front(){
		if(is_emptyt()){
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		else{
			return arr[frontIndex];
		}
	}

	int display(){
		if(is_emptyt()){
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		else{
			cout<<"Queue : ";
			for(int i=frontIndex;i<=rearIndex;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}

	}
 		
 };

 int main(){
 	Queue q; // Create queue object
 	
 	q.enqueue(10); // Add 10 to the queue
 	q.enqueue(20); // Add 10 to the queue
 	q.enqueue(30); // Add 10 to the queue
	q.enqueue(35); // Add 10 to the queue
	q.enqueue(40); // Add 10 to the queue
	q.enqueue(45); // Add 10 to the queue
	q.enqueue(50); // Add 10 to the queue
	q.enqueue(55); // Add 10 to the queue
	q.enqueue(60); // Add 10 to the queue
	q.enqueue(70); // Add 10 to the queue

 	
 	q.display(); // show current state of the equeue
 	
	cout<< "Dequeued : "<<q.dequeue()<<endl;
	cout<< "Dequeued : "<<q.dequeue()<<endl;
	cout<< "Dequeued : "<<q.dequeue()<<endl;
 	
 	q.display();
	
 	return 0;
 }
