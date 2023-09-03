#include<iostream>
using namespace std;

bool is_pallindrome(string str){
    int length = str.size();
    for (int i = 0; i < length/2; i++)
    {
        if (str[i] != str[length-i-1])
        {
            return false;
        }
    }
    return true;  
}

int main(){
    string str;
    getline(cin, str);
    cout<<is_pallindrome(str);
    return 0;
}