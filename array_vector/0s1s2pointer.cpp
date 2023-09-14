#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}

void sort_0s_1s(vector <int> &v){
    int lo=0, hi=v.size()-1;
    while (lo < hi)
    {
        if (v[lo] == 1 && v[hi] == 0) 
        {
            swap(v[lo], v[hi]);
            lo = lo + 1;
            hi = hi -1;
            // int temp = v[lo];
            // v[lo] = v[hi];
            // v[hi] = temp;
        }
        if(v[lo] == 0) lo = lo+1;
        if(v[hi] == 1) hi = hi-1;
    }
    
}

int main(){
    int size;
    cin>>size;

    vector <int> vect;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        vect.push_back(ele);
    }
    
    sort_0s_1s(vect);

    for (int i = 0; i < size; i++)
    {
        cout<<vect[i]<<" ";
    }

    return 0;
}