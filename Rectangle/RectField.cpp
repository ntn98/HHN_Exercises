#include <iostream>

#include "RectField.h"
#include "Rectangle.cpp"

RectField::RectField(int anzElem){
    for (int i = 0; i < anzElem; ++i)
    {
        rectField[i] = new Rectangle(0,0,i,i);
    }
    this->anzElem = anzElem;
}

Rectangle* RectField::Get(int idx) {
    return rectField[idx];
}

void RectField::Print() const {
    for (int i = 0; i < anzElem; ++i)
    {
        std::cout << "[" << i << "] "; 
        rectField[i]->Print();
    }
    
}