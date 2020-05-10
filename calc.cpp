#include<iostream>
#include <stdexcept> 

#include"calc.h"

using namespace c;
using namespace std;

class Exception : public runtime_error { 
public: 
    /*
    Defining constructor of class Exception 
    that passes a string message to the runtime_error class
    */
    Exception() : runtime_error("Math error: Attempted to divide by Zero\n") 
    { } 
}; 


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
    if(y == 0)
        throw Exception();
    else
        return x / y;
}

void calculator::fillValues() {
    cout<<"Enter the First Value - ";
    cin>>x;
    cout<<"Enter the Second Value - ";
    cin>>y;
}
