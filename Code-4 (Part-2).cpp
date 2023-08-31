#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int num=1;
    int bit = num&1;

    if(bit==1)
    {
        cout<<"The Number is Odd";
    }
    else
    {
        cout<<"The Number is Even";
    }
}
