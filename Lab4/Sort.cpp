//
// Created by Bogdan Viziru on 22.03.2024.
//

#include "Sort.h"
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdarg>
Sort::Sort() {}

Sort::Sort(int numElem, int min, int max) {
    for(int i=0; i<numElem;i++){
        elements.push_back(rand() % (max - min + 1) + min);
    }
}

Sort::Sort(initializer_list<int> initList) : elements(initList) {}

Sort::Sort(const vector<int> &vector, int numElem) {
    elements.reserve(numElem);
    for(int i=0; i<numElem; i++){
        elements.push_back(vector[i]);
    }
}

Sort::Sort(const char *str) {
    stringstream ss(str);
    int num;
    while (ss>>num){
        elements.push_back(num);
        if(ss.peek()== ',')
            ss.ignore();
    }
}

Sort::Sort(int count, ...) {
    va_list list;
    va_start(list, count);
    for (int i = 0; i < count; ++i) {
        int num = va_arg(list, int);
        elements.push_back(num);
    }
    va_end(list);
}

void Sort::InsertSort(bool ascending) {
    int n = elements.size();
    for (int i = 1; i < n; ++i) {
        int key = elements[i];
        int j = i - 1;

        if (ascending) {
            while (j >= 0 && elements[j] > key) {
                elements[j + 1] = elements[j];
                j = j - 1;
            }
        } else {
            while (j >= 0 && elements[j] < key) {
                elements[j + 1] = elements[j];
                j = j - 1;
            }
        }
        elements[j + 1] = key;
    }
}

void Sort::QuickSortHelper(int low, int high, bool ascending) {
    if (low < high) {
        int pivot;
        if (ascending)
            pivot = Partition(low, high);
        else
            pivot = ReversePartition(low, high);
        QuickSortHelper(low, pivot - 1, ascending);
        QuickSortHelper(pivot + 1, high, ascending);
    }
}

void Sort::QuickSort(bool ascending) {
    QuickSortHelper(0, elements.size() - 1, ascending);
}

int Sort::Partition(int low, int high) {
    int pivot = elements[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (elements[j] <= pivot) {
            i++;
            std::swap(elements[i], elements[j]);
        }
    }
    std::swap(elements[i + 1], elements[high]);
    return (i + 1);
}

int Sort::ReversePartition(int low, int high) {
    int pivot = elements[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (elements[j] >= pivot) {
            i++;
            std::swap(elements[i], elements[j]);
        }
    }
    std::swap(elements[i + 1], elements[high]);
    return (i + 1);
}

void Sort::BubbleSort(bool ascending) {
    int n = elements.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (ascending) {
                if (elements[j] > elements[j + 1]) {
                    std::swap(elements[j], elements[j + 1]);
                }
            } else {
                if (elements[j] < elements[j + 1]) {
                    std::swap(elements[j], elements[j + 1]);
                }
            }
        }
    }
}


void Sort::Print()  {
    for (int num : elements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int Sort::GetElementsCount()  {
    return elements.size();
}

int Sort::GetElementFromIndex(int index)  {
    if (index >= 0 && index < elements.size())
        return elements[index];
    else
        return -1;
}
