#include<iostream>

namespace c
{
    class calculator
    {
    private:
        float x;
        float y;
        float result;

    public:
        calculator();
        float addition();
        float subtraction();
        float multiplication();
        float division();
        void fillValues();
    };
};