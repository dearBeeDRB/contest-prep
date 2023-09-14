#include<iostream>
#include<vector>
using namespace std;

void sort_array_0s_1s(vector <int> &v){
    int cnt_0s = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            cnt_0s ++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i<cnt_0s)
        {
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }
    
    return;
    
}

int main(){
    vector <int> vect;
    int size;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        vect.push_back(ele);
    }

    sort_array_0s_1s(vect);
    
    for (int i = 0; i < size; i++)
    {
        cout<<vect[i]<<" ";
    }
    

    return 0;
}