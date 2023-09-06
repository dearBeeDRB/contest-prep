#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int complement=0, position_value=1;
    while (n)
    {int i;
        if (i&1 == 1)
        {
            i=0;
        }
        else{
            i=1;
        }
        complement = complement + i*position_value;
        position_value = position_value*10;

        n = n>>1;
        
    }
    cout<<complement;
    
    return 0;
}