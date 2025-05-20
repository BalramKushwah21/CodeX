#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={
	{10,20,58},
	{30,40,65},
	{52,45,84}
	};
	
	cout<<"Matrix : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}