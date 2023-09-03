#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse_num = 0;
    for (; n > 0;)
    {
        int last_digit = n%10;
        reverse_num = reverse_num*10 + last_digit;
        n=n/10;
    }
    cout<<reverse_num;
    return 0;
}