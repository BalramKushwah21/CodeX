#include<iostream>
using namespace std;
 
 Class Queue{
 	private:
 		static const in SIZE = 100;
 		int arr[SZE];
 		int frontIndex;
 		int rearIndex;
	public:
		Queue(){
		frontIndex=-1;
		reaIndex=-1;
	}
void enqueue(int item){
	if)(rearIndex==SIZE-1){
		cout<<"Queue is Full"<<endl;
		return;
	}
    if(frontIndex==-1)frontIndex=0;
    rearIndex++;
    arr[rearIndex]=item; 
    cout<<"Enqueued : "<<item<<endl;
}

int dequeue(){
	if(is_emptyt()){
		cout<<"Queue is empty"<<endl;
		return -1;
	}int item=arr[frontIndex];
	frontIndex++ 
}
 		
 		
 		
 }
 
 
 // Main function to demonstrate the queue operation
 int main(){
 	Queue q; // Create queue object
 	
 	q.enqueue(10); // Add 10 to the queue
 	q.enqueue(20); // Add 10 to the queue
 	q.enqueue(30); // Add 10 to the queue
 	
 	q.display(); // show current state of the equeue
 	
 	cout<< " Dequeued : "<<
 }
 
 
 
 
 //output
 // enqueued : 10
 // enqueued : 20
 // enqueued : 30
 // Queue : 10 20 30
 //dequeued 10
 //front element 20
 //Queue 20 30
