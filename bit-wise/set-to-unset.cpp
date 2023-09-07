#include <iostream>
using namespace std;

void print_binary(int n){
    int bin_num=0, pos_value=1;
    while (n)
    {
        int digit = n&1;
        bin_num = bin_num + pos_value*digit;
        pos_value = pos_value*10;
        n=n>>1;
    }
    cout<<bin_num<<endl;
    return;
}

int main()
{
    // print_binary(10);
    int n=40;
    print_binary(n);
    int i=2;
    if (n&(1<<i))
    {//set bit
        n = n&(~(1<<i));
    }
    else{//unset bit
        n = n|(1<<i);
    }

    print_binary(n);
    
    return 0;
}