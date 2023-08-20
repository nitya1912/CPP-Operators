#include <iostream>
using namespace std;
int main()
{
    int num1 = 4;
    int num2 = 2;
    int add = num1+num2;
    int sub = num1 - num2;
    int mult = num1*num2;
    int div = num1/num2;
    int mod = num1%num2;
    int ls = num1<<num2;
    int rs = num1>>num2;
    int incr = ++num1;
    int decr = --num2;
    int logic = num1&&num2;
    int bit = num1&num2;

    cout<<add<<endl<<sub<<mult<<endl<<div<<endl<<mod<<endl<<ls<<endl<<rs<<endl<<incr<<endl<<decr<<endl<<logic<<endl<<bit;
}