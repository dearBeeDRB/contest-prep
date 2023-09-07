#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        
        str[i] = str[i]+1;
    }
    
    cout<<str;

    return 0;
}