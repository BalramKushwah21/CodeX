//Write program to check is it sum of(x,y) and multiple of (x,y)
//sum of(x,y) or multiple of (4,5)
// chesck sum of ()

#include<iostream>
using namespace std;
int main(){ 
    int x;
    string y;
    cout<<"Enter age : ";
    cin>>x;
    cout<<"Enter country : ";
    cin>>y;
    
    if(x>=18 && y=="india" && x<110) cout<<"You Can vote "<<endl;
    else if(y!="india") cout<<"You are not citizen of india"<<endl;
    else if( x<18 || y!="india") cout<<"You are Minor or not a indian citizen"<<endl;
    else cout<<"Invalid input";

    
    return 0;
} 