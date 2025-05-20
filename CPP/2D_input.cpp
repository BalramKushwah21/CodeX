#include<iostream>
using namespace std;

int main()
{
	int N,M;
	cout<<"Enter value for NxM Matrics"<<endl;
	cout<<"Enter Value of N : ";
	cin>>N;
	cout<<"Enter value of M : ";
	cin>>M;
	
	int arr[N][M];
	
	cout<<"Enter the value of the matrics "<<N*M<<" : "<<endl;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cout<<"Enter value at "<<++i<<"x"<<++j<<": ";
			--i;
			--j;
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
