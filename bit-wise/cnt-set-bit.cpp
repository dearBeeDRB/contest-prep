#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int set_count=0, unset_count=0;
    while (n)
    {
        if ((n & 1) == 1)
        {
            set_count++;
        }
        else{
            unset_count++;
        }
        n = n>>1;
    }
    
    cout<<"set bits count : "<<set_count<<endl;
    cout<<"unset bits count : "<<unset_count<<endl;
    return 0;
}