#include<iostream>
using namespace std;

void calculateTax(int &money){
    int tax = money*10/100;
    money= money-tax; 
}
int main(){
    int income;
    cin>> income;
    calculateTax(income);
    cout<< income;
    
    return 0;
    
}