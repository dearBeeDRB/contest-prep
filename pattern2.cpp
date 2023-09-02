#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        int a=1,b=i;
        for (int j = 1; j <= n+i-1; j++)
        {
            if (j<=n-i)
            {
                cout<<"  ";
            }
            else if (j<=n)
            {
                cout<<a++<<" ";
            }
            else{
                cout<<--b<<" ";
            }
            
            
        }
        cout<<endl;
        
    }
    
    return 0;
}