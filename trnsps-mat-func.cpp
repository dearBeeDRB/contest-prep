#include<iostream>
using namespace std;

void print_transpose(int arr[][5],int new_array[][5], int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            new_array[j][i] = arr[i][j];
        }
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

    print_transpose(my_array, transposed_array, row_num, col_num);

    for (int i = 0; i < col_num; i++)
    {
        for (int j = 0; j < row_num; j++)
        {
            cout<<transposed_array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}