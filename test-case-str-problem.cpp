#include<iostream>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    cin.ignore();
    for (int i = 0; i < test_case; i++)
    {
        string str;
        getline(cin, str);
        cout<<str<<endl;
    }
    
    return 0;
}