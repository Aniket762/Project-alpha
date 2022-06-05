#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	if (!b)                   //if b==0
		return a;
	else
		return GCD(b,a%b);
}

int main()
{
	cout<<"Provide two number (separated by space) whose HCF is to be found: ";
	int a,b;
	cin>>a>>b;
	cout<<endl<<"HCF of "<<a<<" and "<<b<<" is "<<GCD(a,b)<<endl;
}
