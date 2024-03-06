//
// Created by Bogdan Viziru on 06.03.2024.
//

#ifndef LAB2_EXERCITIUL2_STUDENT_H
#define LAB2_EXERCITIUL2_STUDENT_H
#include <string>
using namespace std;
class Student{
private:
    string name;
    double MathGrade, EngGrade, HisGrade;
    double avg;
public:
    void setName(const string& s);
    string getName();

    double getGradeM();
    bool setGradeM(double x);

    double getGradeE();
    bool setGradeE(double x);

    double getGradeH();
    bool setGradeH(double x);

    double avgGrade(){
        return avg;
    }




};


#endif //LAB2_EXERCITIUL2_STUDENT_H
