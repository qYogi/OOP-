#include <iostream>
#include "Student.h"
#include "Global.h"
int main() {
    Student Denis, Bogdan;

    Denis.setName("Boris");
    Bogdan.setName("Bogdan");

    Denis.setGradeM(3);
    Denis.setGradeH(1);
    Denis.setGradeE(10);

    cout << "Notele lui Denis" << endl;
    cout << "Engleza: " << Denis.getGradeE() << '\n';
    cout << "Matematica: " << Denis.getGradeM() << '\n';
    cout << "Istorie: " << Denis.getGradeH() << '\n';

    cout << endl;

    Bogdan.setGradeH(6);
    Bogdan.setGradeM(1);
    Bogdan.setGradeE(1);

    cout << "Notele lui Bogdan" << endl;
    cout << "Engleza: " << Bogdan.getGradeE() << '\n';
    cout << "Matematica: " << Bogdan.getGradeM() << '\n';
    cout << "Istorie: " << Bogdan.getGradeH() << '\n';

    cout << endl;
    cout << "Bazat pe medie generala: " << endl;
    if (compareAverage(&Bogdan, &Denis) == 1)
        cout << "Bogdan e mai destept\n";
    else if (compareAverage(&Bogdan, &Denis) == 0)
        cout << "La fel de destepti\n";
    else
        cout << "Denis e mai destept\n";

    cout << endl;

    cout << "Bazat pe media la Istorie: " << endl;
    if(compareHistoryGrade(&Bogdan, &Denis) == 1)
        cout << "Bogdan e mai destept\n";
    else if(compareHistoryGrade(&Bogdan, &Denis) == 0)
        cout << "Ambii sunt la acelasi nivel\n";
    else
        cout << "Denis e mai destept\n";

    cout << "Bazat pe media la Matematica: " << endl;
    if(compareMathematicsGrade(&Bogdan, &Denis) == 1)
        cout << "Bogdan e mai destept\n";
    else if(compareMathematicsGrade(&Bogdan, &Denis) == 0)
        cout << "Ambii sunt la acelasi nivel\n";
    else
        cout << "Denis e mai destept\n";

    cout << "Bazat pe media la Engleza: " << endl;
    if(compareEnglishGrade(&Bogdan, &Denis) == 1)
        cout << "Bogdan e mai destept\n";
    else if(compareEnglishGrade(&Bogdan, &Denis) == 0)
        cout << "Ambii sunt la acelasi nivel\n";
    else
        cout << "Denis e mai destept\n";
}
