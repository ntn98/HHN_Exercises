#pragma once

#include <vector>
#include "Point.h"

class PointList {
    private:
        //vector für Point Pointer
    public:
        PointList() = default;
        void Add(Point& arg);
        void Print();
};