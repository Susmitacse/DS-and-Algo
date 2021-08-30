#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100]="IIT";
    char b[100];
    
    // length of the string
    cout<< strlen(a) <<endl;

    // copying string from a to b
    strcpy(b,a);
    cout<<b<< endl;

    // Comparing two strings; if matches it outputs 0 
    cout<< strcmp(a,b)<< endl;

    // concat
    char place[100]= " Kharagpur";
    cout<< strcat(a, place)<< endl;

    return 0;

}