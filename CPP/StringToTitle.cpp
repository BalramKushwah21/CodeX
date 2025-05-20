//Convert the string into title case
//Given a sttring consosting of only lowercase and upper case english letters and space
//your task is to convert it into title case


#include<iostream>
using namespace std;

int main()
{
	string str;
	cout<<"Enter the string : ";
	cin>>str;
	int len;
	len= sizeof(str);
	for(int i=0;i<len;i++)
	{
		str[0]=toupper(str[0]);
		if(str[i]==' ')
		{
			str[i+1]=toupper(str[i+1]);
		}
	}
	
//	if(islower(str[0]))
//	{
//		str[0]=toupper(str[0]);
//	}
	cout<<str;
	return 0;
}
