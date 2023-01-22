#pragma once

#include "Rectangle.h"

class RectField
{
private:
    const static int MaxElem{100};
    int anzElem{0};
    Rectangle* rectField[MaxElem];

public:
    Rectangle* Get(int idx);
    RectField(int anzElem);
    void Print() const;
};