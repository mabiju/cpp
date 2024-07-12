#include <iostream>
using namespace std;

int main()
{
    // bitwise Complement (~) Demonstration
    /* 

        35 = 00100011 (In Binary)
        ~ 00100011 
        __________
          11011100  = 220 (In Decimal)------- num1

          Here, if we convert the result into decimal we get 220. 
          However, it is important to note that we cannot directly
          convert the result into decimal and get the desired output.
          This is because the binary result 11011100 is also equivalent to -36.
          To understand this we first need to calculate the binary output of -36.
          We use 2's complement to calculate the binary of negative integers.


        36 = 00100100 (In Binary)
        1's Complement = 11011011 
        2's Complement :   
        11011011
         +     1
       _________
        11011100  --------- num2 (Decimal from signed 2's complement)

        Where num1 = num2, therefore, ~35 = -36



        The bitwise complement of 35 = - (35 + 1) = -36
        i.e. ~35 = -36

        The bitwise complement of -150 = - (-150 + 1) = - (-149) = 149
        i.e. ~(-150) = 149

        Note that the bitwise complement of any integer N is equal to -(N + 1)
     
     */

    int num1 = 35;
    int num2 = -150;
    cout << "~(" << num1 << ") = " << (~num1) << endl;
    cout << "~(" << num2 << ") = " << (~num2) << endl;
    return 0;
}