#include<iostream>
using namespace std;
int main(){
    int previous_term=0,mid_term=1,next_term;
    int term;
    cout<<"Enter the number of terms :";
    cin>>term;
    if (term==1)
    {
        cout<<previous_term;
    }
    else if (term==2)
    {
        cout<<previous_term<<" "<<mid_term;
    }
    else if (term>2)
    {
        cout<<previous_term<<" "<<mid_term<<" ";
        int i=3;
        while (i<=term)
        {
            next_term = previous_term+mid_term;
            cout<<next_term<<" ";
            previous_term = mid_term;
            mid_term = next_term;
            i++;
        }
    }
    
    else{
        cout<<"Enter a valid number of terms.";
    }
    
    
    return 0;
}