#pragma once
#include <string>

using namespace std;

class Calculator
{
public:
    //Addition
    template <typename T>
    T add(T a, T b)
    {
        return (a + b);
    }

    //Subtraction
    template <typename T>
    T sub(T a, T b)
    {
        return (a - b);
    }
    string sub(string a, string b);

    //Multiplication
    template <typename T>
    T mult(T a, T b)
    {
        return (a * b);
    }
    string mult(string a, string b);

    //Division
    template <typename T>
    float div(T a, T b)
    {
        return ((float)a / (float)b);
    }
    string div(string a, string b);
};