#include <iostream>
using namespace std;

void print_matrix(int arr[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int my_array[5][5];
    int row_num, col_num;
    cin >> row_num >> col_num;

    // TAKING MATRIX AS INPUT
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            cin >> my_array[i][j];
        }
    }

    // DISPLAYING MATRIX
    // for (int i = 0; i < row_num; i++)
    // {
    //     for (int j = 0; j < col_num; j++)
    //     {
    //         cout << my_array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    print_matrix(my_array, row_num, col_num);

    return 0;
}