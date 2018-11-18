/*Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method.*/


#include<iostream>
using namespace std;

//main function
int main()
{
    //declaring array 
    int tp [10]={1,2,3,4,5,6,7,8,9,10};

    //pointer
    int *x;

    //1st case
    cout<<"Print the array  by normal index method"<<endl;

    // loop
    for(int i=0;i<10;i++){
    cout<<tp[i]<<" "<<endl;
    }
    
    //2nd case
    cout<<"Print the array by pointer method"<<endl;

    //pointing 
    x=tp;
    
    
    for(int i=0;i<10;i++){
    cout<<*x<<endl;
    x++;
    }
    
return 0;
}
