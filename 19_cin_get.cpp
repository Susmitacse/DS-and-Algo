#include<iostream>
using namespace std;

int main(){
    char sentence[100];
    char temp=cin.get();
    int len=0;
    while(temp!='\n'){
        len++;
        cout<<temp;
        temp=cin.get();

    }
    
    cout<< "length" << len;
    return 0;
}