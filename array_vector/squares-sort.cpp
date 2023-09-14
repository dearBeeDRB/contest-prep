#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a= b;
    b= temp;
}

void sort_array(vector <int> &v){
    int lo = 0;
    int hi = v.size()-1;
    while (lo<hi)
    {
        if (abs(v[lo]) > abs(v[hi]))
        {
            swap(v[lo], v[hi]);
        }
        hi--;    
    }
    return;
}


void square_array(vector <int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = v[i]*v[i];
    }
    return;
}

void print_array(vector <int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
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

    sort_array(vect);

    square_array(vect);

    print_array(vect);
    
    
    return 0;
}