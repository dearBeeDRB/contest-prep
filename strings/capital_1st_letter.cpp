#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    str[0] = str[0] - 32;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            str[i+1] = str[i+1] - 32;
        }
        
    }
    
    cout<<str;

    // int i = 'A'-'a';
    // cout<<i;

    return 0;
}