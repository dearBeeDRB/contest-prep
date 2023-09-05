#include<iostream>
using namespace std;

void reassign(int *ptr){
    *ptr = 10;
    return;
}

int main(){
    int x=3;
    int *ptr_x;
    ptr_x = &x;

//DOUBLE POINTER
    int **ptr_ptr_x;
    ptr_ptr_x = &ptr_x;

    cout<<"ptr_ptr_x : "<<ptr_ptr_x<<endl;
    cout<<"*ptr_ptr_x : "<<*ptr_ptr_x<<endl;
    cout<<"**ptr_ptr_x : "<<**ptr_ptr_x<<endl;

//PASSING POINTER TO FUNCTION
    // cout<<x<<endl;
    // reassign(&x);
    // cout<<x<<endl;

//POINTER DECLARATION AND ASSIGNING
    // int *ptr_x;
    // ptr_x = &x;
    // cout<<ptr_x<<endl;
    // cout<<*ptr_x<<endl;

    return 0;
}