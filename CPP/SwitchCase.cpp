#include <iostream>
using namespace std;

int main() {
    // Your code here
    while(true){
    int x;
    cout<<"Enter day number : ";
    cin>>x;
    switch(x)
    {
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Wednesday"<<endl;
        break;
        case 4:
        cout<<"Thursday"<<endl;
        break;
        case 5:
        cout<<"Friday"<<endl;
        break;
        case 6:
        cout<<"saturday"<<endl;
        break;
        case 7:
        cout<<"Sunday"<<endl;
        break;
        default:
        cout<<"Invalid Input"<<endl;
    }

    }

    return 0;
}