#include<iostream>
using namespace std;

int get_sum(int arr[], int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int my_array[20], size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>my_array[i];
    }

    cout<<get_sum(my_array, size);
    
    return 0;
}