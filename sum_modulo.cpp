#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum_modulo = 0,m = 47;
    
    for (int i = 1; i <= n; i++)
    {
        sum_modulo = (sum_modulo + (i % m)) % m;
    }
    
    cout<<sum_modulo;

    return 0;
}