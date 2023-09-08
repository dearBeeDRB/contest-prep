#include <iostream>
using namespace std;

void sort_bubble(int arr[], int n){
    int pass_cnt=0;
    for (int i = 0; i < n-1; i++)
    {
        pass_cnt++;
        bool is_sorted = true;

        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                is_sorted = false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }   
        }
        if (is_sorted == true)
        {
            break;
        }    
    }   
    cout<<pass_cnt<<endl;
    return; 
}

int main()
{
    int my_array[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>my_array[i];
    }

    sort_bubble(my_array, sizeof(my_array)/sizeof(int));
    
    for (int i = 0; i < 5; i++)
    {
        cout<<my_array[i]<<" ";
    }
    
    return 0;
}