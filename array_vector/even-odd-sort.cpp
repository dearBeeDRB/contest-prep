#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}

void sort_even_odd(vector <int> &v){
    int lo = 0, hi = v.size()-1;
    while (lo < hi)
    {
        if (((v[lo]&1) == 1) && ((v[hi]&1) == 0))
        {
            swap(v[lo], v[hi]);
            lo++;
            hi--;
        }
        if(v[lo]&1 == 0) lo++;
        if(v[hi]&1 == 1) hi--;
    }  
    return; 
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

    sort_even_odd(vect);

    for (int i = 0; i < size; i++)
    {
        cout<<vect[i]<<" ";
    }

    return 0;
}