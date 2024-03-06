//
// Created by Bogdan Viziru on 06.03.2024.
//

#include "NumberList.h"
#include <algorithm>
#include <iostream>

using namespace std;
void NumberList:: Init(){
    count = 0;
}

bool NumberList::Add(int x){
    numbers[count++] = x;
    return true;
}
void NumberList::Sort(){
    std::sort(numbers, numbers+count);
}

void NumberList::Print(){
    for(int i=0; i<count;i++){
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}