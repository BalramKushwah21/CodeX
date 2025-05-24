#include<iostream>
using namespace std;

struct Student{
    int roll_no;
    char name[50];
    float mark;


};

int main(){
    Student students[3];
    // Input Data for student
    for(int i=0;i<3;i++){
        cout<<"Enter details for student "<<i+1<<" \n";
        cout<<"Roll Number : ";
        cin>>students[i].roll_no;
        cout<<"Name : ";
        cin>>students[i].name;
        cout<<"Marks : ";
        cin>>students[i].mark;
    }
    // Display
    for(int i=0;i<3;i++){
        cout<<"\nStudent "<<i+1<<" Details : ";
        cout<<"Roll Number :"<<students[i].roll_no<<endl;
        cout<<"Name : "<<students[i].name<<endl;
        cout<<"Marks : "<<students[i].mark<<endl;
    }

}