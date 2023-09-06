#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // cout<<~n;
    int binary=0;
    int position_value = 1;
    while (n)
    {
        int i = (n&1);
        binary = binary + i*position_value;
        position_value = position_value*10;
        n = n>>1;
        
    }
    cout<<binary;
    
    return 0;
}