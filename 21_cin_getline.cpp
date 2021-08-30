// cin.getline hold all the characters , white spaces and prints it at once 
#include<iostream>
using namespace std;

int main(){

    char sentence[1000];
    cin.getline(sentence, 1000, '\n');
    cout<<sentence<<endl;

    return 0;
}