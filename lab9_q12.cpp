/*Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p.*/


#include <iostream>
using namespace std;

int main(){
	//integer variable
	int a =2,b=3;
	int *p;
	p=&a;
	b=*p;
	//now print a
	cout<<a<<endl;
	//now print b
	cout<<b<<endl;
	//now print p
	cout<<*p<<endl;
	a =2,b=3;
	//now i am assigning pointer p to b
	p=&b;
	//now print a
	cout<<a<<endl;
	//now print b
	cout<<b<<endl;
	//now print p
	cout<<*p<<endl;
return 0;
}
