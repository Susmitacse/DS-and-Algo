#include<iostream>
using namespace std;

int main(){

    int x=10;
    float y=20;

    cout<< "address of x= " << &x<< endl;
    //cout<< "address of y" << &y<< endl;

//Demo of pointer
    int *a = &x;
     cout<< "address of x=" << a<< endl;
     cout<<" The value of x = "<< *a<<endl;   // dereference operator  *a
     cout<< "address of pointer variable = "<< &a<<endl; // prints the address of pointer variable a
     
     int **ptr = &a;
     cout<<"pointer to a pointer variable "<< ptr<< endl;
    return 0;
}