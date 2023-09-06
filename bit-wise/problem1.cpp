// SUBTRACT PRODUCT AND SUM OF DIGITS

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit_product=1, digit_sum=0;
    while (n)
    {
        digit_product *= n%10;
        digit_sum += n%10;
        n /= 10;
    }
    cout<<abs(digit_product-digit_sum);
    return 0;
}