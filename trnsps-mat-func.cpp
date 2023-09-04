#include<iostream>
using namespace std;

void print_transpose(int arr[][5], int row, int col){
    int new_array[5][5];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            new_array[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<new_array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return;
}

int main(){
    int my_array[5][5], transposed_array[5][5];
    int row_num, col_num;
    cin>>row_num>>col_num;
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            cin>>my_array[i][j];
        }
    }

    print_transpose(my_array, row_num, col_num);
    
    return 0;
}