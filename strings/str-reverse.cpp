#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size()/2; i++)
    {
        char temp = str[str.size()-i-1];
        str[str.size()-i-1] = str[i];
        str[i] = temp;
    }
    
    cout<<str;

    return 0;
}