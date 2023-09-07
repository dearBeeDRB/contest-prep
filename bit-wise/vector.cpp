#include<iostream>
#include<vector>
using namespace std;

void print_vect(vector <int> vect){
    for (int i = 0; i < vect.size(); i++)
    {
        cout<<vect[i];
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector <int> v(n,0);

    print_vect(v);

    return 0;
}