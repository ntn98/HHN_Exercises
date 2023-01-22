#include <iostream>

#include "PointList.h"



void PointList::Print() {
    std::cout << "PointList: " << std::endl;
    for (int i = 0; i < Points.size(); i++) {
        std::cout << "-> " << Points.at(i).Print();
    }
    
}