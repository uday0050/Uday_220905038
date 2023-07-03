#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
    float num1, num2;
    cout<<"Enter the numbers : ";
    cin>>num1>>num2;

    char op;
    cout<<"Enter the operant(+,-,/,*) : ";
    cin>>op;
    if(op== '+'){
    cout<<num1+num2;
    }

    else if(op== '-'){
    cout<<num1-num2;
    }

    else if(op== '*'){
    cout<<num1*num2;
    }

    else if(op== '/'){
    cout<<num1/num2;
    }

    else
    cout<<"Cannot be calculated";

}