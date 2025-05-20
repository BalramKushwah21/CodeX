#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
     
    
    for(int a = 0; a < t; a++){
        int sum=0;
        int sum1=0;
       
        int n;
        cin >> n;
        for(int i =1;i<n;i++)
        {
            int a=1;
            int b=1;
            if(i%3==0)
            {
                sum=sum+(3*a);
                ++a;
                cout<<i<<endl;
            }
            else if(i%5==0)
            {
                sum1=sum1+(5*b);
                ++b;
            }
            
        }
        
       
        // cout<<sum<<endl;
        // cout<<sum1<<endl;
        
    }
    
    return 0;
}