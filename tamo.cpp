//define library
# include <iostream>
using namespace std;
// 
int main()
{	
	float a,b,c;
	cout<< " convert the centimeter to meter and kilometer"<< endl;
	cout<< " enter the number in centimeter";
	cin>> a;
	b= (a / 100);
	c= (a / 100000);
	cout<< " the result in meter is  " << b<< endl;
	cout<< " the result in kilometer is " << c << endl;
	return 0;
}
