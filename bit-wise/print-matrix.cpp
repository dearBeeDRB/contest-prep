#include <iostream>
#include<vector>
using namespace std;

void print_matrix(vector <vector<int>> v){
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return;
}

int main()
{
    int row_num, col_num;
    cin>>row_num>>col_num;
    vector <vector<int>> vect(row_num);

    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            int ele;
            cin>>ele;
            vect[i].push_back(ele);
        }
    }
    // cout<<vect[0][0]<<endl;
    // cout<<vect[0][1]<<endl;
    // cout<<vect[1][0]<<endl;
    // cout<<vect[1][1]<<endl;
    // cout<<vect[0].size()<<endl;
    // cout<<vect[1].size()<<endl;

    print_matrix(vect);

    // for (int i = 0; i < vect.size(); i++)
    // {
    //     for (int j = 0; j < vect[i].size(); j++)
    //     {
    //         cout<<vect[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

    return 0;
}