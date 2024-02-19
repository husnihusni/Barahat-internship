#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void add()

{
	int a, b;
	cout<<"Enter the values of a and b"<<endl;
	cin>>a>>b;
	cout<<"Addition of the a and b"<<endl;
	cout<<a+b<<endl;
	
}
void sub()
{
		int num1, num2;
	cout<<"Enter the values of num1 and num2"<<endl;
	cin>>num1>>num2;
	cout<<"subtraction of the num1 and num2"<<endl;
	cout<<num1-num2<<endl;
	cout<<endl;
}
void multiplication()
{
		int c, d;
	cout<<"Enter the values of c and d"<<endl;
	cin>>c>>d;
	cout<<"Multiplication of the c and d"<<endl;
	cout<<c*d<<endl;
	cout<<endl;
}
void division()
{
		int x, y;
	cout<<"Enter the values of x and y"<<endl;
	cin>>x>>y;
	cout<<"Division of the num1 and num2"<<endl;
	if(y!=0)
	{
	
	cout<<x/y<<endl;
//	else{
//	
//	cout<<"something divided by 0 is undefine"<<endl;
//}
}
	cout<<endl;
}

	int main()
	
	{
		
		
		add();
		sub();
		multiplication();
		division();
		
		
		
	
	return 0;
}
