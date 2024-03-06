//
// Created by Bogdan Viziru on 06.03.2024.
//

#include "Global.h"
#include "Student.h"

int compareName(Student *S1, Student *S2){
    if(S1->getName() > S2->getName()){
        return 1;
    } else if(S1->getName() == S2->getName())
            return 0;
    return -1;
}
int compareEnglishGrade(Student *S1, Student *S2) {
    if (S1->getGradeE() > S2->getGradeE())
        return 1;
    else if (S1->getGradeE() < S2->getGradeE())
        return -1;
    return 0;
}

int compareMathematicsGrade(Student *S1, Student *S2) {
    if (S1->getGradeM() > S2->getGradeM())
        return 1;
    else if (S1->getGradeM()< S2->getGradeM())
        return -1;
    return 0;
}

int compareHistoryGrade(Student *S1, Student *S2) {
    if (S1->getGradeH() > S2->getGradeH())
        return 1;
    else if (S1->getGradeH() < S2->getGradeH())
        return -1;
    return 0;
}

int compareAverage(Student *S1, Student *S2) {
    if (S1->avgGrade() > S2->avgGrade())
        return 1;
    else if (S1->avgGrade() < S2->avgGrade())
        return -1;
    else
        return 0;
}
