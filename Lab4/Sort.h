//
// Created by Bogdan Viziru on 22.03.2024.
//

#ifndef LAB4_SORT_H
#define LAB4_SORT_H
#include <vector>
#include <string>

using namespace std;
class Sort {
// add data members
    vector<int> elements;
    int Partition(int low, int high);
    int ReversePartition(int low, int high);
    void QuickSortHelper(int low, int high, bool ascending);
public:
    // add constuctors
    Sort();
    //1
    Sort(int numElem, int min, int max);

    //2
    Sort(initializer_list<int> initList);

    //3
    Sort(const vector<int> &vector, int numElem);

    //4
    Sort(const char *str);

    //5
    Sort(int count, ...);


    void InsertSort(bool ascendent=false);
    void QuickSort(bool ascendent=false);
    void BubbleSort(bool ascendent=false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};


#endif //LAB4_SORT_H
