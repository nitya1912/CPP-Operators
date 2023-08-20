# CPP-Operators

# Code-3

# Title:
To demonstrate different ways of printing an integer in various number systems and also printing its binary representation.

# Theory:
In this particulat code we'll see four types of number representation of an integer they are as follows:- 1)**Hexadecimal**- is base 16. In hexadecimal, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 10, 11, 12, … ; 2)**Octal**- is base 8 -- that is, the only digits available are: 0, 1, 2, 3, 4, 5, 6, and 7. In Octal, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, … (note: no 8 and 9, so we skip from 7 to 10); 3)**Decimal**- is called “base 10”, because there are 10 possible digits (0 through 9). In this system, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, … By default, numbers in C++ programs are assumed to be decimal; 4)**Binary**- in this there are only 2 digits: 0 and 1, so it is called “base 2”. In binary, we count like this: 0, 1, 10, 11, 100, 101, 110, 111,…

# Algorithm:
This algorithm includes the following steps: 1)Include <iostream> and <bitset> headers. ;2)Declare num as an integer and set it to 18. ;3)Output num in hexadecimal format with 0x prefix using cout, showbase, and hex. ;4)Output num in decimal format using cout, showbase, and dec. ;5)Output num in octal format with 0 prefix using cout, showbase, and oct. ;5)Output binary representation of num using cout and bitset<16>(num). ;6)Return 0 to indicate successful program completion.

# Explanation of Code:
**Include Header Files**:Include the <iostream> header for input and output operations.
Include the <bitset> header for working with binary representations. ;**Namespace Declaration**:Use the using namespace std; declaration to avoid prefixing standard library elements with std::. ;**Main Function**:Define the main function where the program execution starts. ;**Variable Declaration**:Declare an integer variable num and assign it the value 18. ;**Printing in Hexadecimal**:Use cout to display the value of num in hexadecimal format with the 0x prefix.Use the showbase manipulator to indicate the base of the number system.Use the hex manipulator to specify that the output should be in hexadecimal. ;
**Printing in Decimal**:Use cout to display the value of num in decimal format.
Use the showbase manipulator to indicate the base of the number system.Use the dec manipulator to specify that the output should be in decimal. ;**Printing in Octal**:Use cout to display the value of num in octal format with the 0 prefix.
Use the showbase manipulator to indicate the base of the number system.Use the oct manipulator to specify that the output should be in octal. ;**Printing Binary Representation**:Use cout to display the binary representation of num using the bitset class.Create a bitset<16> object, initializing it with the binary representation of num.The <16> specifies that the bitset should use 16 bits for representation. ;**End of Main Function**:Return 0 to indicate successful program execution.

**ENG OF CODE-3**
