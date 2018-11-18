// define library

#include<iostream>
#include<cstring>
using namespace std;

int main(){

cout<<" string of character is akash"<<endl;
char str[11]="akash";

cout<<" reverse is "<<endl;



for(int i=10;i>-1;i--){
char*ptr= &str[i];


cout<<*ptr;
ptr--;

}
cout<<endl;
}
