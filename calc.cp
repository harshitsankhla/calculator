#include<iostream>
#include"calc.h"

using namespace c;
using namespace std;

calculator::calculator() {
    x = 0;
    y = 0;
    result = 0;
}

float calculator::addition() {
    result = x + y;
    return result;
}

float calculator::subtraction() {
    result = x - y;
    return result;
}

float calculator::multiplication() {
    result = x * y;
    return result;
}

float calculator::division() {
    //zero division not checked
    result = x / y;
    return result;
}

void calculator::fillValues() {
    cout<<"Enter the First Value - ";
    cin>>x;
    cout<<"Enter the Second Value - ";
    cin>>y;
}
