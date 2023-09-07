#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n>>i;
    if (n&(1<<i))
    {
        cout<<"set bit(1)";
    }
    else{
        cout<<"unset bit(0)";
    }
    
    return 0;
}