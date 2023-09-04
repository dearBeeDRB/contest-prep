#include<iostream>
using namespace std;

void print_array(int arr[][3], int row){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
}

int main(){
    int row_num=3, col_num=3;
    int my_array[row_num][3];
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            cin>>my_array[i][j];
        } 
    }

    print_array(my_array, row_num);
    
    return 0;
}