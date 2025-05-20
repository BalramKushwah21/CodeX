#include<iostream>
using namespace std;

class Emp
{
    public:

        int id1;
        string naam;
        long num;
};

int main()
{
    
    
    int num;
    Emp bal;
    cout<<"Enter emp id : ";
    cin>>num;
    bal.id1 =num;
    cout<<bal.id1<<endl;
    
    return 0;
}