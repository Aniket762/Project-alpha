/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int recursive_factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    
    return number * recursive_factorial(number - 1);
}

int main()
{
    int number;
    cout<<"Include a number to have it's factorial calculated (must be greater or equal to 0)"<< endl;
    cin >> number;
    
    int factorial = recursive_factorial(number);
    
    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}
