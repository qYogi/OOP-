#include "NumberList.h"
#include <iostream>
using namespace std;
int main() {
    NumberList Mylist;
    Mylist.Init();
    Mylist.Add(5);
    Mylist.Add(0);
    Mylist.Add(98);
    Mylist.Add(26);
    Mylist.Add(76);
    Mylist.Add(38);

    Mylist.Sort();
    Mylist.Print();
    return 0;

}
