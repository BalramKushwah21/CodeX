#include<iostream>
using namespace std;

int main()

{
    
    int num,value;
    cout<<"Enter the number of values : ";
    cin>>num;
    int arr[num] = {};
   

    
    for(int i=0;i<num;i++)
    {
        cout<<"Enter value "<<i<<" : ";
        cin>>value;
        arr[i]=value;

        
    }
    cout<<endl;
    cout<<"*********Result of array***********"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<"index : "<<i<<"  value : "<<arr[i]<<endl;
    }
    return 0;
}