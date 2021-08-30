// Given a sentence count the number of digits, spaces and alphabets

#include<iostream>
using namespace std;

int main(){
    // store and then count 

    // read one by one and then count
    char ch;
    ch = cin.get();

    int alpha=0;
    int digit=0;
    int space=0;

    while(ch!='\n'){
        if(ch>='0' and ch<='9'){
            digit++;
        }
        else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            alpha++;
        }
        else if(ch==' ' or ch=='\t'){
            space++;
        }

        ch=cin.get();
    }

    cout<< "Alphabets" << alpha<<endl;
    cout<< "Space" <<space <<endl;
    cout<< "Digits" <<digit <<endl;
    return 0;
}