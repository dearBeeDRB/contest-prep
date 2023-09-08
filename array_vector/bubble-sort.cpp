#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}

vector<int> sort_bubble(vector <int> v){

    int pass_cnt=0;

    for (int i = 0; i < v.size()-1; i++)
    {
        bool is_sorted = true;
        pass_cnt++;
        for (int j = 0; j < v.size()-1; j++)
        {
            if (v[j]>v[j+1])
            {
                is_sorted = false;
                swap(&v[j], &v[j+1]);
            } 
        }
        if (is_sorted == true)
        {
            break;
        }
        
    }

    cout<<pass_cnt<<endl;

    return v;
}

int main()
{
    int size;
    cin>>size;

    vector <int> vect;

    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        vect.push_back(ele);
    }

    vect = sort_bubble(vect);

    for (int i = 0; i < size; i++)
    {
        cout<<vect[i]<<" ";
    }
    
    

    return 0;
}