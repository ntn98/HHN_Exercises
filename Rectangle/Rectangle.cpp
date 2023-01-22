#include <iostream>

#include "Rectangle.h"


Rectangle::Rectangle(double x, double y, double width, double height)
    : x(x), y(y), width(width), height(height)
{}

void Rectangle::SetPos(double x, double y) {
    this -> x = x;
    this -> y = y;
}

void Rectangle::SetDim(double width, double height) {
    this -> width = width;
    this -> height = height;
}

double Rectangle::GetArea() const {
    return height*width;
}

void Rectangle::Print() const {
    std::cout << "(" << x << "|" << y << ")-(" 
        << width << "|" << height << ") - " << GetArea() << std::endl;
}