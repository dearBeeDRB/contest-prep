#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int x=5, y=8;

    cout<<"x y"<<endl;

    cout<<"Before Swap"<<endl;
    cout<<x<<" "<<y<<endl;

    swap(x, y);

    cout<<"After Swap"<<endl;
    cout<<x<<" "<<y<<endl;

// Reference Variable 
    // int num = 4;
    // int &x = num;
    // x=3;
    
    // cout<<num;

    return 0;
}