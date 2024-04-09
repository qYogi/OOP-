//
// Created by Bogdan Viziru on 27.03.2024.
//

#include "Number.h"
using namespace std;

//Comstructor din string
Number::Number(const char *value, int base) : base(base) {
    if(base < 2 || base > 16){
        throw invalid_argument("Baza trebuie sa fie intre 2 si 16");
    }
    for(int i = 0; value[i] != '\0'; i++){
        char digitChar = toupper(value[i]);
        int digitValue;

        if(isdigit(digitChar)){
            digitValue = digitChar -'0';
        }
        else{
            digitValue = digitChar - 'A' + 10;
        }
        if(digitValue >= base){
             throw invalid_argument("Input Invalid");
        }

        digits.push_back(digitValue);
    }
    reverse(digits.begin(), digits.end());
}

Number::Number(int value) : base(10) {
    if(value == 0){
        digits.push_back(0);
    }
    else{
        while(value >0){
            digits.push_back(value % 10);
            value /=10;
        }
        reverse(digits.begin(), digits.end());
    }
}

//Conv base to dec
void Number::baseToDecimal() {
    int decimalValue = 0;
    int power = 0;

    for(int i = digits.size() - 1; i>=0; i--){
        decimalValue += digits[i] * pow(base, power);
        power++;
    }


    base = 10;
    digits.clear();
    if(decimalValue ==0){
        digits.push_back(0);
    }
    else{
        while (decimalValue > 0){
            digits.push_back(decimalValue % 10);
            decimalValue /= 10;
        }
        reverse(digits.begin(), digits.end());
    }
}
//conv dec to base
void Number::toBase(int newBase) {
    int decimalValue = 0;
    int power = 0;

    for (int i = digits.size() - 1; i >= 0; i--) {
        decimalValue += digits[i] * pow(10, power);
        power++;
    }

    digits.clear();
    if (decimalValue == 0) {
        digits.push_back(0);
    } else {
        while (decimalValue > 0) {
            int remainder = decimalValue % newBase;
            digits.push_back(remainder);
            decimalValue /= newBase;
        }
        reverse(digits.begin(), digits.end());
    }
}

//Destructor
Number::~Number(){}

//Copy Constructor
Number::Number(const Number &cpyNumber) : base(cpyNumber.base) {
    digits = cpyNumber.digits;
}
//Move Constructor
Number::Number(Number &&movNumber) : base(movNumber.base){
    movNumber.base = 10;
    movNumber.digits.clear();
}

//Copy assignment operator
Number& Number::operator=(const Number &cpyAssignment){
    if (this != &cpyAssignment){
        base = cpyAssignment.base;
        digits = cpyAssignment.digits;
    }
    return *this;
}
//Move Assignmentt
Number& Number::operator=(Number&& movAssignment){
    if(this != &movAssignment){
        base = movAssignment.base;
        digits = move(movAssignment.digits);
        movAssignment.base = 10; //reset movAssign
        movAssignment.digits.clear();
    }
    return *this;
}

void Number::SwitchBase(int newBase) {
    if (newBase < 2 || newBase > 16){
        throw invalid_argument("Baza noua trebuie sa fie intre [2,16]");
    }
    baseToDecimal();
    toBase(newBase);
    base = newBase;
}

void Number::Print() {
    if(digits.empty()){
        cout << "Vector gol";
    }
    else{
        for (int digit : digits){
            if(digit < 10){
                cout << char(digit + '0');
            }
            else{
                cout << char(digit - 10 + 'A');
            }
        }
    }
    cout << "Baza: " << base << endl;
}

int Number::GetDigitsCount() {
    return digits.size();
}

// GetBase
int Number::GetBase() {
    return base;
}

//OPERATORI







