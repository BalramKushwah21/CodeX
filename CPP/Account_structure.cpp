#include<iostream>
using namespace std;

struct Account{
    long account_no;
    char holder_name[50];
    char brach[20];
    float balance;

};
int main(){
    Account holder[5];
    //input
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter details of holder "<<i+1<<"\n";
        cout<<"Enter account number : ";
        cin>>holder[i].account_no;
        cout<<"Enter holder name : ";
        cin>>holder[i].holder_name;
        cout<<"Enter brach : ";
        cin>>holder[i].brach;
        cout<<"Enter blance : ";
        cin>>holder[i].balance;

    
    }

    for(int i=0;i<5;i++)
    {
        cout<<"\nDetails of holder "<<holder[i].holder_name<<"\n";
        cout<<"Account number : "<<holder[i].account_no<<endl;

        
        cout<<"Holder name : "<<holder[i].holder_name<<endl;
       
        cout<<"Brach : "<<holder[i].brach<<endl;
       
        cout<<"Blance : "<<holder[i].balance<<endl;
       
}
}

