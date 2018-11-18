/*We want to show string repeatedly by shifting top character of string to right.*/


//including the library
#include <iostream>
using namespace std;
int main()
{
    char tamoghna[11];
	 char* charptr;
    cout<<"Enter 10 characters of string"<<endl;
    cin>>tamoghna;
    charptr=&tamoghna[0];
    for(int i=0;i<=10;i++)
   {
    	for(int j=i;j<=10;j++)
    	{
            cout<<*(charptr+j);
    	}
      cout<<endl;
   }
}
