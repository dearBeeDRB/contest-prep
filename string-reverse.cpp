#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size()/2; i++)
    {
        char ch = str[i];
        str[i] = str[str.size()-i-1];
        str[str.size()-i-1] = ch;
    }
    cout<<str;
    return 0;
}