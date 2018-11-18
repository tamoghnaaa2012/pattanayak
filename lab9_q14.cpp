/*[STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method*/


#include <iostream>
using namespace std;
int main()
{
//declaring array
	char me[9]={'T','A','M','O','G','H','N','A','\0'};
	
	
//using index method
cout<<"myself"<<endl;
	for(int n=0;n<9;n++)
		cout <<me[n];
//using pointers method
cout<<"TAMOGHNA"<<endl;	
	for(int n=0;n<9;n++) 
	cout<<*(me+n);
return 0;	
}
