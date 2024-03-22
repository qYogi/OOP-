#include "Sort.h"
#include <iostream>

int main() {
    // random elem
    Sort sort1(10, 1, 100);
    cout << "Random elements: ";
    sort1.Print();

    // initlist
    Sort sort2 = {5, 2, 9, 1, 7};
    cout << "Initializer list elements: ";
    sort2.Print();

    // vector
    vector<int> vec = {3, 8, 1, 6, 4};
    Sort sort3(vec, 5);
    cout << "Vector elements: ";
    sort3.Print();

    // string
    Sort sort4("10, 5, 7, 3, 2");
    cout << "String elements: ";
    sort4.Print();

    // variadic
    Sort sort5(6, 10, 4, 8, 2, 6, 1);
    cout << "Variable arguments elements: ";
    sort5.Print();

    // algoritmi
    Sort sort6 = {9, 3, 7, 1, 5};
    cout << "Before sorting: ";
    sort6.Print();

    cout << "After QuickSort (ascending): ";
    sort6.QuickSort(true);
    sort6.Print();

    cout << "After BubbleSort (descending): ";
    sort6.BubbleSort(false);
    sort6.Print();

    // acces
    cout << "Total elements: " << sort6.GetElementsCount() << std::endl;
    cout << "Element at index 2: " << sort6.GetElementFromIndex(2) << std::endl;

    return 0;
}
