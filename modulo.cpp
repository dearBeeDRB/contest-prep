#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact_modulo=1, m=101;
    for (int i = 2; i <= n; i++)
    {
        fact_modulo = (fact_modulo * (i % m)) % m;
    }
    
    cout<<fact_modulo;

    return 0;
}