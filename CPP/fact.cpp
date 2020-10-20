#include <bits/stdc++.h>
using namespace std;

unsigned long long factorial(int num) {
    if(num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int num;
    cout << "Enter a number upto 20:-" << endl;
    cin >> number;
	
    if (number < 0) {
        cout << "Invalid input." << endl;
    } else if (number > 20) {
        cout << "Invalid Input. Too long." << endl;
    } else {
        cout << factorial(num) << endl;
    }

    return 0;
