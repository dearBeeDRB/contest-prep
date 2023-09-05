#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cin>>*(arr+i);
    }
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout<<*(arr+i)<<" ";
    }
    
    return 0;
}