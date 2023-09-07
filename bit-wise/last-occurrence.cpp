#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector <int> my_vect;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        my_vect.push_back(ele);
    }

    int find_ele=2;
    int idx;

    for (int i = my_vect.size()-1; i >= 0; i--)
    {
        if (my_vect[i] == find_ele)
        {
            idx = i;
            break;
        }
    }
    
    cout<<idx;
    

    return 0;
}