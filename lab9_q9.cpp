//define library

#include<iostream>
#include<cstring>
using namespace std;
string contains(char arr[], char x )
	{
		char * poi = arr;
		int counter= 0;
		string c= "true", d= "false";
		for(; *poi != '\0'; poi++)
			{
				counter ++;
				if (*poi == x)
				break;
			}
		if (counter == 9)
		return d;
		else return c;
	}
	
int main ()
	{
		char x;
		char arr[]= {"tamoghna"};
		cout << " letter of my name"<<endl;
		cin >> x;
		cout<< contains(arr , x )<< endl;
		return 0;
		
}
