#include <iostream>

int countOnes(int num) 
{
    int count = 0;
    while (num != 0)
    {
        count += num & 1; 
        num >>= 1; 
    }
    return count;
}

int main() 
{
    int binaryNumber;
    std::cout << "Enter a number: ";
    std::cin >> binaryNumber;

    int onesCount = countOnes(binaryNumber);
    std::cout << "Number of 1s in the binary form of the input number is: " << onesCount << std::endl;

    return 0;
}
