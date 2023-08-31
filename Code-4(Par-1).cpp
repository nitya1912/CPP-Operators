#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int num = 18;
    cout<<showbase<<hex<<num<<endl;
    cout<<showbase<<dec<<num<<endl;
    cout<<showbase<<oct<<num<<endl;
    cout<<bitset<16>(num);
}
