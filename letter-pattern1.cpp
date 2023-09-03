#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch;
    for (int i = 1; i <= n; i++)
    {
        ch = 'A'+i-1;
        for (int j = 1; j <= n; j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    // cout<<'a'+1;
    
    return 0;
}