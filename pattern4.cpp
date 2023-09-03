#include<iostream>
using namespace std;
int main(){
    int n, a=1;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<a++<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}