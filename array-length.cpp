#include<iostream>
using namespace std;
int main(){
    int my_array[] = {1,2,3,4,5,6};
    int length=0;
    for (int i = 0; i < sizeof(my_array)/sizeof(int); i++)
    {
        cout<<my_array[i]<<" ";
        length++;
    }
    cout<<"\n"<<length;
    return 0;
}