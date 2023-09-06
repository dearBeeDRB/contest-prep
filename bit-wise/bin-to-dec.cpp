#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dec_num = 0, position_value = 0, is_binary = 1;
    while (n)
    {
        int digit = n % 10;
        if (digit != 0 && digit != 1)
        {
            is_binary = 0;
            break;
        }

        dec_num += digit * (1 << position_value);
        position_value++;
        n /= 10;
    }
    if (is_binary == 1)
    {
        cout << dec_num;
    }
    else{
        cout<<"Enter a binary number.";
    }

    return 0;
}