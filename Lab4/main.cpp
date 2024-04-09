#include "Sort.h"
#include <iostream>

int main() {
    // random elem
    Sort sort1(10, 1, 100);
    cout << "Random elem (sorted): ";
    sort1.QuickSort(true);
    sort1.Print();
    cout << endl;

    // initlist
    Sort sort2 = {5, 2, 9, 1, 7};
    cout << "Initlist elem (sorted): ";
    sort2.InsertSort(true);
    sort2.Print();
    cout << endl;

    // vector
    vector<int> vec = {3, 8, 1, 6, 4};
    Sort sort3(vec, 5);
    cout << "Vector elem (sorted): ";
    sort3.BubbleSort(true);
    sort3.Print();
    cout << endl;

    // string
    Sort sort4("10, 5, 7, 3, 2");
    cout << "String elem (sorted): ";
    sort4.QuickSort(true);
    sort4.Print();
    cout << endl;

    // variadic
    Sort sort5(6, 10, 4, 8, 2, 6, 1);
    cout << "Variable arguments elements (sorted): ";
    sort5.InsertSort(true);
    sort5.Print();
    cout << endl;

    // algoritmi
    Sort sort6 = {9, 3, 7, 1, 5};
    cout << "De sortat: ";
    sort6.Print();

    cout << "QuickSort (ascending): ";
    sort6.QuickSort(true);
    sort6.Print();
    cout << endl;

    // Reset pt BS
    sort6 = {9, 3, 7, 1, 5};
    cout << "BubbleSort (descending): ";
    sort6.Print();

    cout << "BubbleSort (descending): ";
    sort6.BubbleSort(false);
    sort6.Print();
    cout << endl;

    // acces
    cout << "Total elements: " << sort6.GetElementsCount() << std::endl;
    cout << "Element at index 2: " << sort6.GetElementFromIndex(2) << std::endl;

    return 0;
}

