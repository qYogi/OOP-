//
// Created by Bogdan Viziru on 27.03.2024.
//

#ifndef LAB5_NUMBER_H
#define LAB5_NUMBER_H
#include <string>
#include <iostream>
using namespace std;


class Number
{
    // add data members
    vector<int> digits; //store digits
    int base;
    void baseToDecimal();
    void toBase(int newBase);
public:
    Number(const char * value, int base); // where base is between 2 and 16
    ~Number();
    Number(int value); //constructor base 10

    Number(const Number &cpyNumber);   //COPY CONS
    Number(Number &&movNumber);        //MOVE CONS
    Number& operator=(const Number& cpyAssignment);
    Number& operator=(Number&& movAssignment);

    // add operators and copy/move constructor
    bool operator>(const Number &nr);
    bool operator<(const Number &nr);
    bool operator>=(const Number &nr);
    bool operator<=(const Number &nr);
    bool operator==(const Number &nr);
    bool operator!=(const Number &nr);

    char operator[](int index);

    friend Number operator+(const Number &op1, Number &op2);
    friend Number operator-(const Number &op1, Number &op2);

    Number& operator--();   // Prefix --
    Number operator--(int); // Postfix --

    void SwitchBase(int newBase);
    void Print();
    int  GetDigitsCount(); // returns the number of digits for the current number
    int  GetBase(); // returns the current base


};


#endif //LAB5_NUMBER_H
