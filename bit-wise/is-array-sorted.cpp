#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector <int> v;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    bool is_sorted=true;

    for (int i = 0; i < v.size()-1; i++)
    {
        if (v[i] > v[i+1])
        {
            is_sorted = false;
            break;
        }
        
    }

    cout<<is_sorted;
    

    return 0;
}