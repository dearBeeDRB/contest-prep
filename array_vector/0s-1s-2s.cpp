#include<bits/stdc++.h>
using namespace std;

void sort_0s_1s_2s(vector <int> &v){
    int cnt_0s=0,cnt_1s=0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == 0) cnt_0s++;
        if(v[i] == 1) cnt_1s++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(i < cnt_0s) v[i]=0;
        else if(i < cnt_0s+cnt_1s) v[i]=1;
        else v[i] = 2;
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
        cin >> ele;
        vect.push_back(ele);
    }

    sort_0s_1s_2s(vect);

    for (int i = 0; i < size; i++)
    {
        cout<<vect[i]<<" ";
    }
    
    return 0;
}