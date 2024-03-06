//
// Created by Bogdan Viziru on 06.03.2024.
//

#include "Student.h"
#include <string>
#include <iostream>



/////////////SET NAME//////////////
void Student::setName(const std::string &s) {
    name = s;
}
/////////////GET NAME//////////////
string Student::getName() {
    return name;
}

/////////////SET GRADE////////////
bool Student::setGradeM(double x) {
    if(x>=1 && x<=10)
    {
        MathGrade=x;
    }
    return false;
}

bool Student::setGradeH(double x) {
    if(x>=1 && x<=10)
    {
        HisGrade=x;
    }
    return false;
}

bool Student::setGradeE(double x) {
    if(x>=1 && x<=10)
    {
       EngGrade=x;
    }
    return false;
}
////////////// END ////////////////

/////////////GET GRADE////////////
double Student::getGradeM() {
    return MathGrade;
}
double Student::getGradeH() {
    return HisGrade;
}
double Student::getGradeE() {
    return EngGrade;
}