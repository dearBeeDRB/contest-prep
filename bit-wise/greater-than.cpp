#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cin>>size;

    vector <int> my_vect;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        my_vect.push_back(ele);
    }
    
    int x, greater_cnt = 0;
    cin>>x;

    for (int i = 0; i < my_vect.size(); i++)
    {
        if (my_vect[i] <= x)
        {
            continue;
        }
        greater_cnt++;
    }
    
    cout<<greater_cnt;

    return 0;
}