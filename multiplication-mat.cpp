#include <iostream>
using namespace std;
int main()
{
    int arr1[5][5], arr2[5][5], final_arr[5][5];
    int row_num1, col_num1, row_num2, col_num2;
    cout << "Enter the dimensions of FIRST MATRIX(row number, column number) : ";
    cin >> row_num1 >> col_num1;
    cout << "Enter the dimensions of SECOND MATRIX(row number, column number) : ";
    cin >> row_num2 >> col_num2;
    cout << "Enter the elements of first matrix :" << endl;
    for (int i = 0; i < row_num1; i++)
    {
        for (int j = 0; j < col_num1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of second matrix :" << endl;
    for (int i = 0; i < row_num2; i++)
    {
        for (int j = 0; j < col_num2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    if (col_num1 == row_num2)
    {
        for (int i = 0; i < row_num1; i++)
        {
            for (int j = 0; j < col_num2; j++)
            {
                int sum = 0;
                for (int a = 0; a < col_num1; a++)
                {
                    sum += arr1[i][a] * arr2[a][j];
                }
                final_arr[i][j] = sum;
            }
        }

        cout<<"ANS :"<<endl;

        for (int i = 0; i < row_num1; i++)
        {
            for (int j = 0; j < col_num2; j++)
            {
                cout << final_arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout<<"Multiplication is not possible.";
    }

    return 0;
}