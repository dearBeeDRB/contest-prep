#include<iostream>
using namespace std;
int main(){
    int n, previous_term=0, mid_term=1, next_term;
    cin>>n;
    if (n==1)
    {
        cout<<previous_term;
    }
    else if (n==2)
    {
        cout<<mid_term;
    }
    else if (n>2)
    {
        for (int i = 3; i <= n; i++)
        {
            next_term = previous_term + mid_term;
            previous_term = mid_term;
            mid_term = next_term;
        }
        cout<<mid_term;
    }
    else{
        cout<<"Enter a valid number of term.";
    }
    
    return 0;
}