#include<iostream>
using namespace std;
int main(){
    int my_array[5][5];
    int row_num, col_num;
    cin>>row_num>>col_num;
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            cin>>my_array[i][j];
        }
    }

    int transposed_array[5][5];

    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            transposed_array[j][i] = my_array[i][j];
        }
    }
    
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