#include<iostream>
#include"calc.h"

using namespace c;
using namespace std;

int main(int argc, char* argv[])
{
    calculator calc;
    calc.fillValues();

    cout<<"\nSum is : "<<calc.addition();
    cout<<"\nDiff is : "<<calc.subtraction();
    cout<<"\nProduct is : "<<calc.multiplication();
    cout<<"\nQuotient is : "<<calc.division();
    cout<<"\n";

    return 0;
}