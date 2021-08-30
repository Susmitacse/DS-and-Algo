#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[]={'a','d','g','h','e', '\0'};   // always terminate the char array with '\0' , otherwise it will give garbage value in the end 
    cout<< a <<endl ;
    cout<< strlen(a) <<endl;  // gives the no. of characters
    cout<< sizeof(a) <<endl;  // size of the char array (holds the null character as well)

    // taking user input does not require a loop 
    cout<<"enter a string"<<endl;
    char b[100];
    cin>>b;   // cin does not take blank space 
    cout<<b;
    return 0;
}