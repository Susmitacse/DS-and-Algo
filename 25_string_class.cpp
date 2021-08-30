#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    // string s("hello world");
    // string s;
    // getline(cin,s);
    // cout<<s;


    //  using vector
    string s1;
    int n=3;
    vector<string> sarr;
    string temp;

    while(n--){
        getline(cin, temp);
        sarr.push_back(temp);

    }
    for(string x: sarr){
        cout<< x<<","<<endl;
    }

    return 0;
}