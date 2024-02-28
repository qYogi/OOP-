#include <iostream>
#include <cstring>
using namespace std;

void split(char A[]) {
    int n = strlen(A);
    string word = "";
    for (int i = n - 1; i >= 0; i--) {
        if (A[i] == ' ') {
            cout << word << endl;
            word = "";
        } else {
            word = A[i] + word;
        }
    }
    cout << word << endl;
}

int main() {
    char A[100];
    cout << "Introduceti propozitia: " << endl;
    cin.getline(A, 100);
    split(A);
    return 0;
}
