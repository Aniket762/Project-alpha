#include <bits/stdc++.h>
using namespace std;

unsigned long long factorial(int number) {
    if(number == 0) {
        return 1;
    }
    return number * factorial(number - 1);
}

int main() {
    int number;
    cout << "Enter a number between the range of 0 to 20:-" << endl;
    cin >> number;
	
    if (number < 0) {
        cout << "Invalid Input. The entered number cannot be negative." << endl;
    } else if (number > 20) {
        cout << "Invalid Input. The entered number cannot exceed 20. As 20! is lasrgest factorial result that \"unsigned long long\" data type can store." << endl;
    } else {
        cout << factorial(number) << endl;
    }

    return 0;
}