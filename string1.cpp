#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    // str[3] = 'Y';   //STRINGS ARE MUTABLE IN C++
    int len = str.size();
    cout<<str<<endl;
    cout<<len<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     getline(cin, str);
    //     cout << str<<endl;
    // }

    return 0;
}