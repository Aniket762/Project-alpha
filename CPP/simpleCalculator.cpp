#include<iostream.h>

using namespace std;

int main(){
int num1,num2;
char op;
cout<<"Enter first number:";
cin>>num1;
cout<<"Enter operator:";
cin>>op;
cout<<"Enter second number:";
cin>>num2;
int result;
if(op == '+'){
result = num1 + num2;
}
if(op == '-'){
result = num1 - num2;
}
if(op == '*'){
result = num1 * num2;
}
if(op == '/'){
result = num1 / num2;
}
if(op == '%'){
result = num1 % num2;
}
cout<<"Result is:"<<result;



}
