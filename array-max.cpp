#include<iostream>
using namespace std;

int get_max(int arr[], int n){
    int max_arr = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_arr = max(max_arr, arr[i]);
    }
    return max_arr;
}

int main(){
    int my_array[100],size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>my_array[i];
    }
    
    cout<<get_max(my_array, size);

    return 0;
}