# CPP-Operators

# Code-3

# Title:
To demonstrate different ways of printing an integer in various number systems and also printing its binary representation.

# Theory:
In this particulat code we'll see four types of number representation of an integer they are as follows:- 1)**Hexadecimal**- is base 16. In hexadecimal, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 10, 11, 12, … ; 2)**Octal**- is base 8 -- that is, the only digits available are: 0, 1, 2, 3, 4, 5, 6, and 7. In Octal, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, … (note: no 8 and 9, so we skip from 7 to 10); 3)**Decimal**- is called “base 10”, because there are 10 possible digits (0 through 9). In this system, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, … By default, numbers in C++ programs are assumed to be decimal; 4)**Binary**- in this there are only 2 digits: 0 and 1, so it is called “base 2”. In binary, we count like this: 0, 1, 10, 11, 100, 101, 110, 111,…

# Algorithm:
This algorithm includes the following steps: 1)Include <iostream> and <bitset> headers. ;2)Declare num as an integer and set it to 18. ;3)Output num in hexadecimal format with 0x prefix using cout, showbase, and hex. ;4)Output num in decimal format using cout, showbase, and dec. ;5)Output num in octal format with 0 prefix using cout, showbase, and oct. ;5)Output binary representation of num using cout and bitset<16>(num). ;6)Return 0 to indicate successful program completion.

# Explanation of Code:
**Include Header Files**:Include the <iostream> header for input and output operations.Include the <bitset> header for working with binary representations. ;**Namespace Declaration**:Use the using namespace std; declaration to avoid prefixing standard library elements with std::. **Main Function**:Define the main function where the program execution starts. ;**Variable Declaration**:Declare an integer variable num and assign it the value 18. ;**Printing in Hexadecimal**:Use cout to display the value of num in hexadecimal format with the 0x prefix.Use the showbase manipulator to indicate the base of the number system.Use the hex manipulator to specify that the output should be in hexadecimal. ;
**Printing in Decimal**:Use cout to display the value of num in decimal format.
Use the showbase manipulator to indicate the base of the number system.Use the dec manipulator to specify that the output should be in decimal. ;**Printing in Octal**:Use cout to display the value of num in octal format with the 0 prefix.
Use the showbase manipulator to indicate the base of the number system.Use the oct manipulator to specify that the output should be in octal. ;**Printing Binary Representation**:Use cout to display the binary representation of num using the bitset class.Create a bitset<16> object, initializing it with the binary representation of num.The <16> specifies that the bitset should use 16 bits for representation. ;**End of Main Function**:Return 0 to indicate successful program execution.

**END OF CODE-3**


# Code-4

# Title:
To demonstrates how to determine whether a given number is even or odd using bitwise operations.

# Theory:
Bitwise operations are fundamental operations that manipulate individual bits within integer values. They are often used in low-level programming, data manipulation and optimization. 

# Algorithm:
Algorithm includes the following steps: 1)Include necessary header files. ;2)Declare num and bit as integers. ;3)Perform num & 1 bitwise AND operation and store the result in bit. ;4)If bit is equal to 1, print "The Number is Odd". ;5)Otherwise, print "The Number is Even". ;6)Return 0 to indicate successful program completion.

# Explanation of Code:
**Include Header Files**:The #include directives include the necessary header files for input/output and the std::bitset class. ;**Namespace Declaration**:The using namespace std; declaration allows you to use standard library elements without the std:: prefix. ;**Main Function**:The main function is where the program starts execution. ;**Bitwise AND Operation**:The result of num & 1 is 1 if the least significant bit of num is 1 (odd number) and 0 if it's 0 (even number). This operation checks whether the number is odd or even based on its least significant bit. ;**Condition Check and Output**:(i)If bit is equal to 1, the least significant bit of num is 1, which means num is an odd number. So, "The Number is Odd" is printed. (ii)If bit is not equal to 1 (i.e., it's 0), then the least significant bit of num is 0, indicating that num is an even number. So, "The Number is Even" is printed. ;**End of Main Function**:The program returns 0 to indicate successful program completion.
When you run this code with num set to 1, it will output: **The Number is ODD**

**END OF CODE-4**


# Code-5

# Title: 
To demonstrates various arithmetic, bitwise, increment, decrement, and logical operations on two integer variables.

# Theory:
The various operations on integer variables are as follows: **Arithmetic Operations**:Addition, subtraction, multiplication, division, and modulo between num1 (4) and num2 (2). ;**Bitwise Operations**:Left shift (<<) and right shift (>>) operations on num1.Bitwise AND (&) operation between num1 and num2. ;**Increment and Decrement**:Increment (++) of num1.Decrement (--) of num2. ;**Logical and Bitwise Logical Operations**:Logical AND (&&) operation between num1 and num2.Bitwise AND (&) operation between num1 and num2.

# Algorithm:
Algorithm includes: 1)Include necessary header files. ;2)Declare integer variables num1 and num2. ;3)Calculate arithmetic operations and store results. ;4)Perform bitwise operations and store results. ;5)Increment and decrement variables. ;6)Perform logical operations and store results. ;7)Use cout to output the results. ;8)Return 0 to indicate successful program completion. 

# Explanation of Code:
**Include Header Files**:Include the <iostream> header for input and output operations. ;**Namespace Declaration**:Use the using namespace std; declaration to avoid prefixing standard library elements with std::. ;**Main Function**:Define the main function where the program execution starts. ;**Variable Declarations and Initialization**:Declare integer variables num1 and num2 and initialize them to 4 and 2, respectively. ;**Arithmetic Operations**:Calculate the sum of num1 and num2 and store it in add.Calculate the difference of num1 and num2 and store it in sub.Calculate the product of num1 and num2 and store it in mult.Calculate the quotient of num1 divided by num2 and store it in div.Calculate the remainder of num1 divided by num2 and store it in mod. ;**Bitwise Operations**:Perform a left shift of num1 by num2 positions and store the result in ls.Perform a right shift of num1 by num2 positions and store the result in rs.Perform a bitwise AND operation between num1 and num2 and store the result in bit.**Increment and Decrement Operations**:Increment num1 and store the result in incr.Decrement num2 and store the result in decr.**Logical and Bitwise Logical Operations**:Perform a logical AND operation between num1 and num2 and store the result in logic. ;**Output**:Use cout to display the values of add, sub, mult, div, mod, ls, rs, incr, decr, logic, and bit, each followed by a newline. ;**End of Main   Function**:Return 0 to indicate successful program execution.

**END IN CODE-5**
