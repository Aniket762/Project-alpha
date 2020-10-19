#include <iostream> 
using namespace std;

unsigned int factorial(unsigned int n){
    if(n<=1)return 1;
    else return n*factorial(n-1);
}
int main(){
    unsigned int n=0;
cout <<"Enter the number : ":
cin >> n;
cout <<"Factorial of number"<<n<<"is: "<<factorial(n);
    return 0;
}